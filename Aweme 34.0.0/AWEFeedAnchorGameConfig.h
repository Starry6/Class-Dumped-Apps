@interface AWEFeedAnchorGameConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView gameButton;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (id)gameButton;
- (void)setGameButton:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (id)anchorType;
@end
