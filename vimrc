syntax on
set mouse-=a
hi ModeMsg ctermfg=White
set ts=4
set expandtab
set shiftwidth=4
set softtabstop=4
set number
set hlsearch
set incsearch
set ignorecase
set cindent
set completeopt=preview,menu

:inoremap ( ()<ESC>i
        :inoremap ) <c-r>=ClosePair(')')<CR>
:inoremap { {<CR>}<ESC>O
    :inoremap } <c-r>=ClosePair('}')<CR>
    :inoremap [ []<ESC>i
    :inoremap ] <c-r>=ClosePair(']')<CR>
    :inoremap " ""<ESC>i
    :inoremap ' ''<ESC>i
    function! ClosePair(char)
        if getline('.')[col('.') - 1] == a:char
            return "\<Right>"
        else
            return a:char
        endif
endfunction
filetype plugin indent on
set completeopt=longest,menu

map <F5> :call CompileRunGcc()<CR>
func! CompileRunGcc()
    exec "w" 
    if &filetype == "c" 
        exec "!g++ % -o %<"
        exec "! ./%<"
    elseif &filetype == 'cpp'
        exec "!g++ % -o %<"
        exec "! ./%<"
    elseif &filetype == 'java'
        exec "!javac %"
        exec "!java %<"
    elseif &filetype == 'sh'
        :!./%
    endif
endfunc
