syntax on
set noerrorbells
set tabstop=4 softtabstop=4
set shiftwidth=4
set expandtab
set smartindent
set nu
set nowrap
set smartcase
set noswapfile
set nobackup
set incsearch
set mouse=a
set colorcolumn=80
highlight ColorColumn ctermbg=0 guibg=lightgrey
source ~/.vim/autoload/plug.vim
source ~/.vim/autoload/cppconfig.vim

imap jk <Esc>
imap kj <Esc>

if executable('rg')
    let g:rg_derive_root='true'
endif

let mapleader=" "



call plug#begin('~/.vim/plugged')
Plug 'morhetz/gruvbox'
Plug 'jremmen/vim-ripgrep'
Plug 'tpope/vim-fugitive'
Plug 'leafgarland/typescript-vim'
Plug 'vim-utils/vim-man'
Plug 'lyuts/vim-rtags'
Plug 'kien/ctrlp.vim'
Plug 'Valloric/YouCompleteMe'
Plug 'mbbill/undotree'
call plug#end()

colorscheme gruvbox

set background=dark
