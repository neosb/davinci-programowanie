puts "Insert an integer number: "
n = gets.chomp
base_n_in_bounds = false
while !base_n_in_bounds
  puts "Specify the base of your number (from 2 to 36): "
  base_n = gets.chomp.to_i
  if base_n >= 2 && base_n <= 36
    n = n.to_i base
    puts "Your number is #{n} in base 10"
    base_out_in_bounds = false
    while !base_out_in_bounds
      puts "Insert base to which you want to convert (from 2 to 36): "
      base_out = gets.chomp.to_i
      if base_out >= 2 && base_out <= 36
        puts "You number in base #{base_out} is: #{n.to_s base_out}"
        break
      end
    end
    break
  end
end
