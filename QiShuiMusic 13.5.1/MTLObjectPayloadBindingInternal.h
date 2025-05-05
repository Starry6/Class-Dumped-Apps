@interface MTLObjectPayloadBindingInternal : MTLBindingInternal
@property (nonatomic) Q objectPayloadAlignment;
@property (nonatomic) Q objectPayloadDataSize;
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
- (unsigned long long)objectPayloadDataType;
- (id)structType;
- (unsigned long long)objectPayloadDataSize;
- (void)setStructType:;
- (id)initWithName:type:access:isActive:arraySize:dataType:dataSize:alignment:;
- (unsigned long long)objectPayloadAlignment;
- (id)initWithName:type:access:isActive:locationIndex:arraySize:dataType:dataSize:alignment:;
- (id)objectPayloadStructType;
@end
