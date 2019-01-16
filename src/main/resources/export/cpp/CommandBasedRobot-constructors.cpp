#foreach ($component in $components)
#if ($helper.exportsTo("Robot", $component))
    #constructor($component)

#if ($component.getProperty("Send to SmartDashboard").getValue())
    frc::SmartDashboard::PutData(#variable($component.name).get());
#end
#end
#end
