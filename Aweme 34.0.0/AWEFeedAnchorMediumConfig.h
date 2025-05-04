@interface AWEFeedAnchorMediumConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView mediumButton;
@property (nonatomic) BOOL isExpand;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)commonParams;
- (BOOL)isExpand;
- (void)setIsExpand:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptBigFontMode;
- (void)handleAnchorViewTapped;
- (void)trackEventWithEventName:;
- (id)mediumButton;
- (void)setAdTagLabelAttributedText:tailText:;
- (void)setMarkLabelAttributedText:tailText:;
- (id)attributeStringForNewStyleWithText:tailText:;
- (id)attributeStringWithText:tailText:;
- (void)updateAnchorWithPlayBackTime:;
- (void)setMediumButton:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (id)anchorType;
@end
