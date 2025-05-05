@interface IESLivePublicScreenFixedCardContainer : UIView
@property (nonatomic) {CGSize=dd} preferredSize;
@property (nonatomic) UIView contentView;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (void)setConfigModel:;
- (id)allAnimationFinished;
- (id)configModel;
- (void)disappear:;
- (void)resetPreferredSize:;
- (void)setAllAnimationFinished:;
- (void)setContentView:preferredSize:;
- (void)setTrackContext:;
- (id)trackContext;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)preferredSize;
- (void)setPreferredSize:;
@end
