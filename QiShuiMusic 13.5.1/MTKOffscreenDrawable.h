@interface MTKOffscreenDrawable : NSObject
@property (nonatomic) CAMetalLayer layer;
@property (nonatomic) <MTLTexture> texture;
@property (nonatomic) double presentedTime;
@property (nonatomic) Q drawableID;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)texture;
- (void)present;
- (void)setPixelFormat:;
- (double)presentedTime;
- (void)setDevice:;
- (id)layer;
- (void)addPresentedHandler:;
- (void)presentAtTime:;
- (void).cxx_destruct;
- (unsigned long long)pixelFormat;
- (unsigned long long)drawableID;
- (void)presentAfterMinimumDuration:;
- (void)setSize:;
- (id)device;
- (id)size;
- (id)initWithDevice:pixelFormat:size:drawableID:;
@end
