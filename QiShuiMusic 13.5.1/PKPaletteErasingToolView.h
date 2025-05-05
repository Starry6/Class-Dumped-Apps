@interface PKPaletteErasingToolView : PKPaletteToolView
@property (nonatomic) double weight;
@property (nonatomic) BOOL bitmapEraser;
@property (nonatomic) NSString toolIdentifier;
@property (nonatomic) NSString toolVariant;
@property (nonatomic) PKToolConfiguration configuration;
@property (nonatomic) <PKPaletteInkingTool> inkingTool;
@property (nonatomic) <PKPaletteErasingTool> erasingTool;
@property (nonatomic) <PKPaletteHandwritingTool> handwritingTool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)weight;
- (void).cxx_destruct;
- (id)initWithToolIdentifier:variant:configuration:;
- (id)toolIdentifier;
- (id)attributeViewController;
- (void)setToolProperties:;
- (BOOL)isBitmapEraser;
- (void)setBitmapEraser:;
- (void)erasingAttributesViewControllerDidChangeErasingType:;
- (void)erasingAttributesViewControllerDidChangeInkThickness:;
- (void)setToolProperties:updateUI:;
- (void)_updateAttributesViewController;
- (void)_updateAttributesViewControllerWeight;
@end
