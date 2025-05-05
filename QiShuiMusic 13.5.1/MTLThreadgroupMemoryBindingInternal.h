@interface MTLThreadgroupMemoryBindingInternal : MTLBindingInternal
@property (nonatomic) Q threadgroupMemoryAlignment;
@property (nonatomic) Q threadgroupMemoryDataSize;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) Q access;
@property (nonatomic) Q index;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL argument;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formattedDescription:;
- (void)setStructType:doRetain:;
- (unsigned long long)threadgroupMemoryDataType;
- (id)structType;
- (id)threadgroupMemoryStructType;
- (void)setStructType:;
- (id)initWithName:type:access:isActive:locationIndex:arraySize:dataType:dataSize:alignment:;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
@end
