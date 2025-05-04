@interface AWEPOIDetailImageTextAnnotationView : MKAnnotationView
@property (nonatomic) AWEPOIStrokeLabel titleLabel;
@property (nonatomic) UIImageView poiAnchorView;
- (id)poiAnchorView;
- (void)setPoiAnchorView:;
- (void)prepareForReuse;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setAnnotation:;
- (void)setupUI;
- (id)initWithAnnotation:reuseIdentifier:;
@end
