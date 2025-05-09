@interface AWEFeedAnchorIronManConfig : AWEFeedAnchorBaseConfig
@property (nonatomic) AWEMarkView ironManButton;
@property (nonatomic) @? blockPeriod;
@property (nonatomic) @? twoLineBlock;
@property (nonatomic) BOOL hasAnimated;
@property (nonatomic) BOOL hasDynamicIcon;
@property (nonatomic) BOOL twoLineHasAnimated;
@property (nonatomic) double playTime;
@property (nonatomic) @? ironManTwoLineBlock;
@property (nonatomic) @? ironManTwoLineAlbumBlock;
@property (nonatomic) BOOL hasIronManTwoLineStyleAnimated;
@property (nonatomic) q doubleInfoResult;
@property (nonatomic) q doubleInfoShow;
@property (nonatomic) BOOL anchorHasShown;
@property (nonatomic) NSString twoLineContent;
@property (nonatomic) double startShowtime;
@property (nonatomic) double doubleLineTime;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (void)setPlayTime:;
- (id)anchorViewWithModel:;
- (id)layoutWithAwemeModel:commonLayoutInfo:;
- (BOOL)shouldShowIronManButton;
- (id)ironManButton;
- (void)setIronManButton:;
- (void)setHasAnimated:;
- (id)blockPeriod;
- (BOOL)hasAnimated;
- (void)setBlockPeriod:;
- (void)addAnimationBlockPeriodIfNeed;
- (void)removeAnimationBlockPeriodIfNeed;
- (id)adAttributeStringWithText:tailText:;
- (id)animationTitle;
- (void)setStartShowtime:;
- (void)setDoubleLineTime:;
- (double)startShowtime;
- (double)doubleLineTime;
- (id)fontWithWeight:size:;
- (id)sizeWithOriginSize:;
- (void)updateAnchorUIConfigModel:;
- (void)layoutButtonWithNewStyle:withModel:;
- (void)setHasDynamicIcon:;
- (id)anchorConfig;
- (void)setTwoLineContent:;
- (id)twoLineContent;
- (void)setDoubleInfoResult:;
- (void)addIronManTwoLineStyleBlockPeriodIfNeed:;
- (void)trackEventWithEventName:withParams:;
- (void)addTwoLineStyleBlockPeriodIfNeed:;
- (void)trackAnchorAdEventWithLabel:refer:;
- (void)trackAnchorUserEventWithEventName:;
- (void)ironManAnchorViewWillShow:;
- (void)updateForSpiderDoubleLine:;
- (void)setAnchorHasShown:;
- (BOOL)canPreloadIronMan:;
- (BOOL)forbidIronManPreloadInLowerDevice;
- (BOOL)enableIronManPreloadWithNunki;
- (void)sendEventTrackingWhenClick:;
- (BOOL)twoLineHasAnimated;
- (void)setTwoLineHasAnimated:;
- (void)setDoubleInfoShow:;
- (void)removeTwoLineAnimationBlockIfNeed;
- (void)setTwoLineBlock:;
- (id)twoLineBlock;
- (void)removeIronManTwoLineAnimationBlockIfNeed;
- (void)setHasIronManTwoLineStyleAnimated:;
- (void)sendDurationNotEnoughTracker;
- (long long)doubleInfoResult;
- (BOOL)anchorHasShown;
- (BOOL)hasIronManTwoLineStyleAnimated;
- (long long)doubleInfoShow;
- (void)updateAnchorStyle;
- (void)handlePlaybackTimeChanged:duration:;
- (void)setIronManTwoLineBlock:;
- (id)ironManTwoLineBlock;
- (void)setIronManTwoLineAlbumBlock:;
- (id)ironManTwoLineAlbumBlock;
- (void)trackIronManShowDoubleLineStyle;
- (id)getCommonTrackInfoDict;
- (id)anchorTrackParamsWithEventName:;
- (BOOL)hasDynamicIcon;
- (void)trackSpiderManClickEvent;
- (double)playTime;
- (void).cxx_destruct;
- (void)reset;
- (int)animationBeginTime;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:extraInfo:;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:extraInfo:;
+ (BOOL)enableIronManAnchorLargeMode;
+ (id)anchorType;
@end
