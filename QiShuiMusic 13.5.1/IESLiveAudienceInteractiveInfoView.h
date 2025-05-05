@interface IESLiveAudienceInteractiveInfoView : UIView
@property (nonatomic) IESLiveRichTextLabel strLabel;
- (void)updateWithModel:now:sortByTime:;
- (void)setStrLabel:;
- (id)strLabel;
- (id)waitingDesStringWithModel:now:;
- (void).cxx_destruct;
- (void)updateWithModel:;
+ (BOOL)abEnableEventInfoForAll;
@end
