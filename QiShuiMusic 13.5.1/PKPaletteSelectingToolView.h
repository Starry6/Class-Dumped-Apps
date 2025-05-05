@interface PKPaletteSelectingToolView : PKPaletteToolView
@property (nonatomic) <PKPaletteInkingTool> inkTool;
@property (nonatomic) PKInk ink;
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
- (void)setSelected:;
- (void).cxx_destruct;
- (void)setInkColor:;
- (id)ink;
- (void)setInkWeight:;
- (id)attributeViewController;
- (id)initWithToolIdentifier:configuration:;
- (id)inkTool;
- (void)setInkTool:;
@end
