<?php

namespace Rector\Naming\Tests\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class SkipExprNotVariable
{
    public function run()
    {
        $array = [];
        foreach (['foo', 'bar'] as $property) {
            $array[] = $property;
        }
    }
}

?>
