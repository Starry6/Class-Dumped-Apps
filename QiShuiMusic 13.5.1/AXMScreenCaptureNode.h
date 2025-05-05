@interface AXMScreenCaptureNode : AXMSourceNode
@property (nonatomic) AXMScreenGrabber screenGrabber;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)produceImage:;
- (id)screenGrabber;
- (void)triggerWithScreenCaptureRegion:interfaceOrientation:options:cacheKey:resultHandler:;
- (void)setScreenGrabber:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
