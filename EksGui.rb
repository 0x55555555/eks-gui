RbMake.import_module('../EksCore')
RbMake.import_module('../Eks3D')

RbMake.library(:EksGui, :Eks) do |l, p|
  l.dependencies << :EksCore << :Eks3D << :QtOpenGL
end 