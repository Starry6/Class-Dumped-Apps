@interface BDXLynxVideoSeekView : LynxUIView
@property (nonatomic) double customScale;
@property (nonatomic) UIColor customColor;
@property (nonatomic) BOOL needRedrawThumb;
@property (nonatomic) UISlider seek;
- (BOOL)needRedrawThumb;
- (void)setCustomScale:;
- (void)currentDuration:requestReset:;
- (void)current_duration:requestReset:;
- (void)didSeekValueChanged:forEvent:;
- (void)duration:requestReset:;
- (void)layoutDidFinished;
- (id)makeCircleWithSize:color:;
- (void)onNodeReady;
- (id)parseColor:;
- (id)seek;
- (void)setCustomColor:requestReset:;
- (void)setCustomScale:requestReset:;
- (void)setNeedRedrawThumb:;
- (void)setSeek:;
- (void)setCustomColor:;
- (void).cxx_destruct;
- (id)customColor;
- (id)createView;
- (double)customScale;
+ (id)__lynx_prop_config__751;
+ (id)__lynx_prop_config__802;
+ (id)__lynx_prop_config__863;
+ (id)__lynx_prop_config__934;
+ (id)__lynx_prop_config__985;
+ (void)lynxLazyLoad;
@end
