@interface WKModelView : WKCompositingView
@property (nonatomic) ASVInlinePreview preview;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (void)createPreview;
- (id)hitTest:withEvent:;
- (BOOL)createFileForModel:;
- (id)initWithFrame:;
- (id)initWithModel:layerID:page:;
- (void).cxx_destruct;
- (void)updateBounds;
- (id)preview;
- (id).cxx_construct;
@end
