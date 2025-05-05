@interface IESLiveSaaSFeedLiveRecordCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel secondLineLabel;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> urlHandler;
@property (nonatomic) <HTSLiveSaaSFeedItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secondLineLabel;
- (void)didClickCell;
- (void)setSecondLineLabel:;
- (id)item;
- (void)update:;
- (id)avatarView;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setItem:;
- (id)urlHandler;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setupViews;
- (void)setUrlHandler:;
@end
