@interface BDXLynxSvgView : UIView
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL recreateLayerContents;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BDXLynxBaseSvgUI ui;
- (id)initWithFrame:andUI:;
- (BOOL)recreateLayerContents;
- (void)setRecreateLayerContents:;
- (void)displayLayer:;
- (BOOL)invalidated;
- (void)setImage:;
- (void)setInvalidated:;
- (void).cxx_destruct;
- (id)ui;
- (void)invalidate;
- (id)image;
- (void)setUi:;
@end
