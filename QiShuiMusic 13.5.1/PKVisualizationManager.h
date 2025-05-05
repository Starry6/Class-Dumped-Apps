@interface PKVisualizationManager : NSObject
@property (nonatomic) CHVisualizationManager chVisualizationManager;
@property (nonatomic) BOOL recognitionStatusReportingEnabled;
@property (nonatomic) <PKVisualizationManager> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)valueForRecognitionStatusKey:;
- (BOOL)recognitionStatusReportingEnabled;
- (void)setRecognitionStatusReportingEnabled:;
- (void)visualizationManager:needsDisplayInRect:;
- (void)visualizationManagerNeedsDisplay:;
- (void)visualizationManagerDidUpdateSessionStatus:;
- (id)initWithRecognitionSession:;
- (id)chVisualizationManager;
- (void)setChVisualizationManager:;
+ (id)localizedNameForRecognitionStatusKey:;
+ (id)availableRecognitionStatusKeys;
@end
