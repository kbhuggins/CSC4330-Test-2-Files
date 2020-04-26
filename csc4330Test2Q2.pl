#static and dynamic scoping!
#Kahrin Huggins

$k = 3;
$f = 2;

sub one {
    return $k;
}

sub two {
    local $k = 5;
    $f = 4;
    return one();
}


print two()."\n"; 
print $f;