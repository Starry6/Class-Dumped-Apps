@interface PKPaletteConcreteBaseTool : NSObject
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
- (id)configuration;
- (void).cxx_destruct;
- (BOOL)isInkingTool;
- (BOOL)isErasingTool;
- (BOOL)isRulerTool;
- (BOOL)isLassoTool;
- (BOOL)isHandwritingTool;
- (BOOL)isCustomTool;
- (id)toolIdentifier;
- (id)toolVariant;
- (id)inkingTool;
- (id)erasingTool;
- (id)handwritingTool;
@end
