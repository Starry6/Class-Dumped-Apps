@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool
@property (nonatomic) NSString localeIdentifier;
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
- (void).cxx_destruct;
- (id)localeIdentifier;
- (void)setLocaleIdentifier:;
- (BOOL)isHandwritingTool;
- (id)toolIdentifier;
@end
