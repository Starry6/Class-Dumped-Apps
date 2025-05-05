@interface MPSImageDefaultAllocator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)imageForCommandBuffer:imageDescriptor:kernel:;
- (id)imageBatchForCommandBuffer:imageDescriptor:kernel:count:;
+ (BOOL)supportsSecureCoding;
@end
