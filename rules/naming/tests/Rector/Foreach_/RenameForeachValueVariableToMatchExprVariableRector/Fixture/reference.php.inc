<?php

namespace Rector\Naming\Tests\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class Reference
{
    public function run()
    {
        $array = [];
        foreach ($variables as &$property) {
            $array[] = $property;
        }
    }
}

?>
-----
<?php

namespace Rector\Naming\Tests\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class Reference
{
    public function run()
    {
        $array = [];
        foreach ($variables as &$variable) {
            $array[] = $variable;
        }
    }
}

?>
