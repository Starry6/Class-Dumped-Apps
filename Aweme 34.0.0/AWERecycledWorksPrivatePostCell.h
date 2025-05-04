@interface AWERecycledWorksPrivatePostCell : UICollectionViewCell
@property (nonatomic) DUXBaseImageView coverImageView;
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) DUXBaseImageView deleteIcon;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) NSString defaultTitle;
@property (nonatomic) AWERecycledWorksPrivatePostModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (id)deleteIcon;
- (void)setDeleteIcon:;
- (void)setModel:;
- (id)effectView;
- (id)initWithFrame:;
- (void)setEffectView:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)defaultTitle;
- (void)setDefaultTitle:;
+ (id)identifier;
@end
