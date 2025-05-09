@interface SFSiteIconCell : UICollectionViewCell
@property (nonatomic) UIView contextMenuPreviewView;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconFromAction:;
- (void)updateViewsDependingOnCustomTraits;
- (id)icon;
- (void)_setAction:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)focusEffect;
- (id)contextMenuPreviewView;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)title;
- (void)setIconFromBookmark:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)configureUsingAction:;
- (id)subtitle;
- (void)updateConstraints;
+ (id)reuseIdentifier;
@end
