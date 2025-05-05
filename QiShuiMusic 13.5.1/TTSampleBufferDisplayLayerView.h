@interface TTSampleBufferDisplayLayerView : UIView
@property (nonatomic) AVSampleBufferDisplayLayer displayLayer;
@property (nonatomic) BOOL deallocFlush;
@property (nonatomic) BOOL enableReuse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnableReuse:;
- (void)avViewDidBecomeActive;
- (void)avViewDidEnterBackground:;
- (void)createLayer;
- (BOOL)deallocFlush;
- (BOOL)enableReuse;
- (void)setDeallocFlush:;
- (void)setLifeCallback:;
- (void)setRenderRotation:;
- (int)startWithRender:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)stop;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enqueueSampleBuffer:;
- (id)displayLayer;
- (void)setDisplayLayer:;
@end
