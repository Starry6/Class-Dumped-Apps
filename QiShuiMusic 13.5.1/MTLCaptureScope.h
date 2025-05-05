@interface MTLCaptureScope : _MTLObjectWithLabel
@property (nonatomic) NSString label;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)beginScope;
- (id)initWithDevice:commandQueue:;
- (id)commandQueue;
- (void)endScope;
- (id)device;
@end
