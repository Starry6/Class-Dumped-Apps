@interface MPSGraphListData : MPSGraphTensorData
- (long long)maxSize;
- (id)elementType;
- (id)list;
- (void).cxx_destruct;
- (id)mpsndarray;
- (id)initWithDevice:list:maxSize:elementType:;
- (id)initEmptyListWithDevice:maxSize:elementType:;
- (void)pushBackElement:;
- (id)popBackElement;
- (id)clonedList;
@end
