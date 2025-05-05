@interface MTLBuiltInMeshArgument : MTLBindingInternal
- (unsigned long long)meshPrimitiveCount;
- (void)dealloc;
- (id)formattedDescription:;
- (id)meshVertexStruct;
- (unsigned long long)builtInDataType;
- (unsigned long long)meshTopologyType;
- (id)meshPrimitiveStruct;
- (unsigned long long)meshVertexCount;
- (id)initWithName:type:access:active:index:dataType:builtInType:meshVertexStructType:meshPrimitiveStructType:meshVertexCount:meshPrimitiveCount:meshTopologyType:;
- (unsigned long long)builtInType;
@end
