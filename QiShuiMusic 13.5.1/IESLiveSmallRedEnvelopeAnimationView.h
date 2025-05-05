@interface IESLiveSmallRedEnvelopeAnimationView : UIView
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar firstAvatarView;
@property (nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar secondAvatarView;
@property (nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar thirdAvatarView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel diamondLabel;
@property (nonatomic) @? actionBlock;
- (id)thirdAvatarView;
- (id)firstAvatarView;
- (id)buildRichTextForDiamond:;
- (id)diamondLabel;
- (id)secondAvatarView;
- (void)setDiamondLabel:;
- (void)setFirstAvatarView:;
- (void)setSecondAvatarView:;
- (void)setThirdAvatarView:;
- (void)setupAvatar:user:cornerRadius:;
- (void)updateWithAvatars:totalDiamond:backgroungImage:;
- (id)backgroundView;
- (id)actionBlock;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setActionBlock:;
- (void)didTapView;
@end
