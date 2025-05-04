@interface AWEFeedAnchorTemplateWrapperConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) UIView bizAnchorView;
@property (nonatomic) NSObject<AWEFeedTemplateAnchorBaseConfigProtocol> bizConfig;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (BOOL)useNewStyle;
- (id)bizConfig;
- (void)setBizConfig:;
- (id)anchorViewType;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (double)maxAnchorViewWidth;
- (void)setBizAnchorView:;
- (void)setContainerStyle;
- (id)bizAnchorView;
- (double)maxAnchorViewWidthForFeed;
- (id)getBizConfigByProtocol:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (BOOL)enableABTest;
+ (id)templateAnchorDataCheckFailReason:;
+ (BOOL)isEmptyInfo:;
+ (BOOL)lengthOverLimit:;
+ (double)getTitleMaxLen:;
+ (id)anchorType;
@end
