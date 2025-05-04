@interface AWEMusicCardPlaylistAnchorHeaderView : UIView
@property (nonatomic) BDImageView coverImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel ownerLabel;
@property (nonatomic) UILabel collectCountLabel;
@property (nonatomic) NSString name;
@property (nonatomic) NSString owerName;
@property (nonatomic) q collectCount;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setCollectCount:;
- (long long)collectCount;
- (void)setupSubview;
- (id)ownerLabel;
- (void)setOwnerLabel:;
- (void)setOwerName:;
- (id)collectCountLabel;
- (void)updateWithPlaylistInfo:;
- (id)owerName;
- (void)setCollectCountLabel:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setNameLabel:;
+ (double)viewHeight;
@end
