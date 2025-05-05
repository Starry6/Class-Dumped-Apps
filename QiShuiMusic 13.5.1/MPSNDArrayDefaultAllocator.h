@interface MPSNDArrayDefaultAllocator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)arrayForCommandBuffer:arrayDescriptor:kernel:;
- (id)bufferForCommandBuffer:size:options:kernel:;
- (void)freeBuffer:forCommandBuffer:;
+ (BOOL)supportsSecureCoding;
@end
