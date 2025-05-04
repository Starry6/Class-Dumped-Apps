@interface AWEPlayInteractionVideoNoteButtonView : UIView
@property (nonatomic) DUXBaseLabel contentView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) YYAnimatedImageView imageView;
@property (nonatomic) <AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithIcon:title:dec:;
- (BOOL)hitInnerVideoSingleChapterUIOptimizeExp;
- (void)setModel:;
- (id)init;
- (id)delegate;
- (double)verticalMargin;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)bgColor;
@end
