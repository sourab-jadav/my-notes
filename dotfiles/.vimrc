syntax on
set showcmd
packloadall

set noerrorbells
set tabstop=4 softtabstop=4
set shiftwidth=4
set relativenumber
set expandtab
set smartindent
set nu
set ignorecase
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


if executable('rg')
    let g:rg_derive_root='true'
endif

let mapleader=" "
let g:ctrlp_user_command=['.git/','git --git-dir=%s/.git ls-files -oc --exclude-standard']
let g:netrw_browse_split=2
let g:netrw_banner=0
let g:netrw_winsize=25

let g:ctrl_use_caching=0


nnoremap <leader>h :wincmd h<CR>
nnoremap <leader>j :wincmd j<CR>
nnoremap <leader>k :wincmd k<CR>
nnoremap <leader>l :wincmd l<CR>
nnoremap <leader>u :UndotreeShow<CR>
nnoremap <leader>pv :wincmd v<bar> :Ex <bar> :vertical resize 30<CR>
nnoremap <leader>ps :Rg<SPACE>
nnoremap <leader>q :q!<CR>
nnoremap <leader>w :w<CR>

nnoremap <silent> <leader>gd :YcmCompleter GoTo<CR>
nnoremap <silent> <leader>gf :YcmCompleter FixIt<CR>




call plug#begin('~/.vim/plugged')
Plug 'prettier/vim-prettier', {
  \ 'do': 'yarn install --frozen-lockfile --production',
  \ 'for': ['javascript', 'typescript', 'css', 'less', 'scss', 'json', 'graphql', 'markdown', 'vue', 'svelte', 'yaml', 'html'] }
Plug 'morhetz/gruvbox'
Plug 'jremmen/vim-ripgrep'
Plug 'tpope/vim-fugitive'
" add this line to your .vimrc file
Plug 'mattn/emmet-vim'
Plug 'tpope/vim-surround'

Plug 'leafgarland/typescript-vim'
Plug 'vim-utils/vim-man'
Plug 'lyuts/vim-rtags'
Plug 'kien/ctrlp.vim'
Plug 'Valloric/YouCompleteMe'
Plug 'mbbill/undotree'
Plug 'jiangmiao/auto-pairs'
call plug#end()

colorscheme gruvbox

set background=dark
