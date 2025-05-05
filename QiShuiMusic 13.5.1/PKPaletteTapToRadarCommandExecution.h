@interface PKPaletteTapToRadarCommandExecution : NSObject
@property (nonatomic) PKPaletteTapToRadarConfiguration configuration;
- (void)editingOverlayContainerDidChangeToSceneBounds:;
- (void)run;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
+ (id)commandExecutionWithConfiguration:;
@end
