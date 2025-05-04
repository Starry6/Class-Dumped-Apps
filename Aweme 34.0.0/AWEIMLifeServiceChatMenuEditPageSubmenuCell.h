@interface AWEIMLifeServiceChatMenuEditPageSubmenuCell : UICollectionViewCell
@property (nonatomic) AWEIMLifeServiceChatMenuEditPageMenuContentView menuContentView;
@property (nonatomic) <AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate> delegate;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)lifeServiceChatMenuEditPageMenuContentView:didPress:;
- (void)lifeServiceChatMenuEditPageMenuContentView:didTapDelete:;
- (id)menuContentView;
- (void)__didTapMenuContent;
- (void)configWithModel:enableDelete:enableMove:;
- (void)hideAllContent;
- (void)setupBottomCornerRadius;
- (void)setMenuContentView:;
- (id)delegate;
- (id)indexPath;
- (id)initWithFrame:;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)identifier;
@end
