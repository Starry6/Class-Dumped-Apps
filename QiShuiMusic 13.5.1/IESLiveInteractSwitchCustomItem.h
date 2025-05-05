@interface IESLiveInteractSwitchCustomItem : IESLiveButton
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) BOOL isAudioLive;
@property (nonatomic) UILabel bottomTitleLbl;
- (void)setIsAudioLive:;
- (id)bottomTitleLbl;
- (id)initWithDIContext:isAudioLive:;
- (BOOL)isAudioLive;
- (void)setBottomTitleLbl:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:;
@end
