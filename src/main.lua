local text = "zbro"
local speed = 100

local pos = {x = 320, y = 240}

local move = {up = false, down = false, left = false, right = false}

function love.load()
	love.graphics.setNewFont(12)
end

function love.draw()
	love.graphics.print(text, pos.x, pos.y)
	love.window.setTitle("zbro")
end

function love.keypressed(key)
	if key == "up" then
		move.up = true
	elseif key == "down" then
		move.down = true
	elseif key == "left" then
		move.left = true
	elseif key == "right" then
		move.right = true
	elseif key == "escape" then
		love.event.quit()
	else
		--do nothing
	end
end

function love.keyreleased(key)
	if key == "up" then
		move.up = false
	elseif key == "down" then
		move.down = false
	elseif key == "left" then
		move.left = false
	elseif key == "right" then
		move.right = false
	else
		--do nothing
	end
end

function love.update(dt)
	if move.up then
		pos.y = pos.y - speed * dt
	end
	
	if move.down then
		pos.y = pos.y + speed * dt
	end
	
	if move.left then
		pos.x = pos.x - speed * dt
	end
	
	if move.right then
		pos.x = pos.x + speed * dt
	end
end
