@interface DCNotesTextureBackgroundView : UIView
@property (nonatomic) NSLayoutConstraint textureYConstraint;
@property (nonatomic) NSLayoutConstraint textureHeightConstraint;
@property (nonatomic) DCNotesTextureView textureView;
@property (nonatomic) BOOL scrollsTexture;
- (void)setContentOffset:;
- (void)setFrame:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setBounds:;
- (void).cxx_destruct;
- (double)heightByCoveringHeight:withImage:;
- (id)initWithFrame:scrollingTextures:hasAlpha:;
- (void)commonInitWithScrollingTextures:hasAlpha:;
- (id)textureView;
- (BOOL)scrollsTexture;
- (void)setScrollsTexture:;
- (id)textureYConstraint;
- (void)setTextureYConstraint:;
- (id)textureHeightConstraint;
- (void)setTextureHeightConstraint:;
+ (id)textureImage;
+ (id)colorWithPaperTexturePatternImage;
@end
