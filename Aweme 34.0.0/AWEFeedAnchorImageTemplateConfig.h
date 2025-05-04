@interface AWEFeedAnchorImageTemplateConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView imageTemplateAnchorView;
@property (nonatomic) NSString templateModelJson;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (void)handleAnchorViewTapped;
- (id)imageTemplateAnchorView;
- (void)setImageTemplateAnchorView:;
- (id)templateModelJson;
- (void)setTemplateModelJson:;
- (void).cxx_destruct;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:extraInfo:;
+ (BOOL)imageTemplateAnchorEnable;
+ (id)anchorType;
@end
