@interface IESLivePublicScreenCommonTipView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (void)setConfigModel:;
- (id)allAnimationFinished;
- (id)configModel;
- (void)disappear:;
- (void)setAllAnimationFinished:;
- (void)setAttributedText:adviseType:;
- (void)setTrackContext:;
- (id)trackContext;
- (id)init;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
@end
