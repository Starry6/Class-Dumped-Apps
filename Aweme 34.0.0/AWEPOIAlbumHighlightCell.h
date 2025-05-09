@interface AWEPOIAlbumHighlightCell : UITableViewCell
@property (nonatomic) AWEGradientView bottomMask;
@property (nonatomic) AWEPOIVideoPlayerView playerView;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIImageView tagView;
@property (nonatomic) UIImageView mediaTypeView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEPOIAlbumPhotoInfo model;
@property (nonatomic) UIViewController vc;
@property (nonatomic) <AWEPOIVideoPlayerDelegate> delegate;
@property (nonatomic) @? didTap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidTap:;
- (void)registerNotification;
- (void)didEndDisplayingCell;
- (id)mediaTypeView;
- (void)setMediaTypeView:;
- (void)didReceivePoiAlbumPhotoPageShowNotification;
- (void)didReceivePoiAlbumPhotoPageHideNotification;
- (void)setModel:;
- (void)dealloc;
- (id)delegate;
- (void)setSubtitleLabel:;
- (id)model;
- (void)setPlayerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)playerView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (id)coverView;
- (void)setCoverView:;
- (void)setupUI;
- (void)willDisplayCell;
- (id)vc;
- (void)updateWithModel:;
- (id)bottomMask;
- (void)setBottomMask:;
- (id)didTap;
- (void)setVc:;
- (void)tapAction;
- (id)tagView;
- (void)setTagView:;
@end
