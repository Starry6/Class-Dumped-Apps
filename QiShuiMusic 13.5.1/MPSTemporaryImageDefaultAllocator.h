@interface MPSTemporaryImageDefaultAllocator : MPSImageDefaultAllocator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (id)imageForCommandBuffer:imageDescriptor:kernel:;
+ (BOOL)supportsSecureCoding;
@end
