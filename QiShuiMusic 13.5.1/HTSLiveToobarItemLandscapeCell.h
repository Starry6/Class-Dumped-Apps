@interface HTSLiveToobarItemLandscapeCell : HTSLiveToobarItemCell
@property (nonatomic) UIView customViewForLandscape;
@property (nonatomic) UIView grayBackGroundView;
- (id)customViewForLandscape;
- (void)didSetAttachingDIContext;
- (id)grayBackGroundView;
- (void)highlightGuide;
- (void)setCustomViewForLandscape:;
- (void)setGrayBackGroundView:;
- (void)updateWithItem:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
