@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (id)arrayForCommandBuffer:arrayDescriptor:kernel:;
+ (BOOL)supportsSecureCoding;
@end
