@interface AWEMusicCollectionPlaylistCardCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView privateMarkView;
@property (nonatomic) UIImageView myFavoriteIcon;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configSubviews;
- (id)privateMarkView;
- (id)myFavoriteIcon;
- (void)refreshWithCoverImageUrl:placeholderImage:playlistName:isPrivate:isInvalid:isFavorite:;
- (void)resetToCreateCard;
- (void)setPrivateMarkView:;
- (void)setMyFavoriteIcon:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setNameLabel:;
+ (id)coverSize;
@end
