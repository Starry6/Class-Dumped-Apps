@interface UISnapshotView : UIView
@property (nonatomic) {UIEdgeInsets=dddd} edgePadding;
@property (nonatomic) UIColor edgePaddingColor;
@property (nonatomic) UIView snapshotView;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) BOOL verticalStretchEnabled;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} snapshotRect;
@property (nonatomic) UIView shadowView;
@property (nonatomic) BOOL edgeAntialiasingEnabled;
- (void)setEdgeInsets:;
- (void)setEdgeAntialiasingEnabled:;
- (void)dealloc;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)edgeInsets;
- (id)_contentSize;
- (id)initWithFrame:;
- (void)setBounds:;
- (void)setShadowView:;
- (id)_snapshotView;
- (id)shadowView;
- (id)edgePadding;
- (id)_contentOffset;
- (id)_snapshotRect;
- (void)setContentStretch:;
- (void)setEdgePadding:;
- (BOOL)isEdgeAntialiasingEnabled;
- (void)_setContentOffset:;
- (BOOL)isVerticalStretchEnabled;
- (void)setVerticalStretchEnabled:;
- (void)_setSnapshotRect:;
- (void)_positionImageView;
- (void)_updateContentsRect;
- (id)_edgePadding;
- (void)_drawEdges:withContentSize:;
- (id)_contentsCenterForEdgePadding:withContentSize:;
- (void)_addEdgePaddingViewInRect:;
- (void)captureSnapshotRect:fromView:withSnapshotType:;
- (void)captureSnapshotOfView:withSnapshotType:;
- (id)edgePaddingColor;
- (void)setEdgePaddingColor:;
@end
