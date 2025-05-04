@interface AWEFeedAnchorARConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView arButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)arButton;
- (void)setArButton:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (id)anchorType;
@end
