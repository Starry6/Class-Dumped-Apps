@interface AWEAwemeBarrageBaseView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) AWEBarrageModel model;
@property (nonatomic) BOOL isShortStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureUI;
- (void)configureWithFrame:;
- (BOOL)isShortStyle;
- (BOOL)shouldResponseEventOnLocation:;
- (void)setIsShortStyle:;
- (void)setModel:;
- (void)updateStyle;
- (void)resume;
- (void)prepareForReuse;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (id)model;
- (void).cxx_destruct;
- (void)pause;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)resetLayer:;
- (void)playAnimation;
@end
