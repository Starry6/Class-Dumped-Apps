@interface CSJRenderResultModel : NSObject
@property (nonatomic) {CGSize=dd} adViewSize;
@property (nonatomic) BOOL haveVideoInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoFrame;
@property (nonatomic) {?=dddd} videoCornerRadii;
@property (nonatomic) double maxRadius;
@property (nonatomic) UIView playerViewContainerView;
@property (nonatomic) NSString correctDynamicPtplId;
- (id)adViewSize;
- (id)correctDynamicPtplId;
- (BOOL)haveVideoInfo;
- (id)playerViewContainerView;
- (void)setAdViewSize:;
- (void)setCorrectDynamicPtplId:;
- (void)setHaveVideoInfo:;
- (void)setMaxRadius:;
- (void)setPlayerViewContainerView:;
- (void)setVideoCornerRadii:;
- (void)setVideoFrame:;
- (id)videoCornerRadii;
- (void).cxx_destruct;
- (double)maxRadius;
- (id)videoFrame;
@end
