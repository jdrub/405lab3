----------------------------------------------------------------------------------
-- Company: Bombass Industries
-- Engineer: Joshua Drubin
-- 
-- Create Date:    15:44:12 02/18/2016 
-- Design Name: 
-- Module Name:    AT89C51IC2 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity AT89C51IC2 is
    Port ( MISO : in  STD_LOGIC;
           MOSI : out  STD_LOGIC;
           DI : in  STD_LOGIC_VECTOR (7 downto 0);
           DO : out  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           SCLK : in  STD_LOGIC;
           RSEL : in  STD_LOGIC_VECTOR (2 downto 0));
end AT89C51IC2;

architecture Behavioral of AT89C51IC2 is

begin


end Behavioral;

