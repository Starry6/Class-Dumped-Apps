@interface AWETeenSpeedPlayView : UIView
@property (nonatomic) UIView speedPlayContainer;
@property (nonatomic) NSMutableArray selectItems;
@property (nonatomic) UIImageView playbackRateIcon;
@property (nonatomic) <AWETeenSpeedPlayViewProtocol> delegate;
- (id)selectItems;
- (void)setSelectItems:;
- (void)p_layoutViews;
- (id)speedPlayContainer;
- (void)setSpeedPlayContainer:;
- (void)p_activateButtonWithPlaybackRateType:;
- (void)clickButton:;
- (void)updatePlaybackRateIconPosition:;
- (id)playbackRateIcon;
- (void)setPlaybackRateIcon:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
