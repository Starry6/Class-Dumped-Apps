@interface AWEPOICurrentLocationAnnotationView : MKAnnotationView
@property (nonatomic) UIImageView poiAnchorImageView;
@property (nonatomic) UIImageView userAvatarImageView;
- (id)userAvatarImageView;
- (void)setUserAvatarImageView:;
- (void)setPoiAnchorImageView:;
- (id)poiAnchorImageView;
- (void)updateCurrentHeading:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
