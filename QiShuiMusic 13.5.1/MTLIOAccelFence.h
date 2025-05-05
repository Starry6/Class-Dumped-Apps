@interface MTLIOAccelFence : _MTLFence
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:fenceIndex:;
@end
