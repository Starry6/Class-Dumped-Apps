@interface AWETeenLongPressPanelSpeedViewModel : AWETeenLongPressPanelBaseViewModel
@property (nonatomic) NSArray playbackRateTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configVM;
- (id)subViewSize;
- (id)speedItem;
- (void)speedChangeToastShow:;
- (id)playbackRateTypes;
- (void)longPressPanelSegementViewDidClick:index:;
- (double)longPressPanelSegementTitleLabelFontSize:;
- (id)longPressPanelSegementAnimationViewSize:;
- (void)setPlaybackRateTypes:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
