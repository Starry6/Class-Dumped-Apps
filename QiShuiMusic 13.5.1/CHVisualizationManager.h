@interface CHVisualizationManager : NSObject
@property (nonatomic) NSMutableSet _enabledVisualizationIDs;
@property (nonatomic) NSMutableArray _activeVisualizationIDs;
@property (nonatomic) NSMutableDictionary _activeVisualizationsByID;
@property (nonatomic) NSMutableDictionary _strokeGroupIndexByAncestorID;
@property (nonatomic) BOOL _registeredAsChangeObserver;
@property (nonatomic) BOOL _registeredAsInputDrawingsClient;
@property (nonatomic) CHRecognitionSession recognitionSession;
@property (nonatomic) <CHVisualizationManagerDelegate> delegate;
@property (nonatomic) BOOL statusReportingEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)valueForRecognitionStatusKey:;
- (void)setStatusReportingEnabled:;
- (void)drawVisualizationInRect:context:viewBounds:;
- (BOOL)statusReportingEnabled;
- (id)recognitionSession;
- (id)initWithRecognitionSession:;
- (void)recognitionSessionDidUpdateRecognitionResult:;
- (void)recognitionSessionDidChangeStatus:;
- (void)visualization:needsDisplayInRect:;
- (void)visualizationNeedsDisplay:;
- (long long)visualizationIndexForStrokeGroup:;
- (void)setEnabled:forVisualizationIdentifier:;
- (BOOL)isEnabledVisualizationForIdentifier:;
- (BOOL)_isActiveVisualizationForIdentifier:;
- (void)_updateInstalledVisualizations;
- (void)_addVisualizationForIdentifier:;
- (void)_removeVisualizationForIdentifier:;
- (void)_updateSessionRegistration;
- (void)toggleSelectiveVisualizationsAtPoint:;
- (void)_updateKnownStrokeGroupIndexes;
- (id)_enabledVisualizationIDs;
- (id)_activeVisualizationIDs;
- (id)_activeVisualizationsByID;
- (id)_strokeGroupIndexByAncestorID;
- (BOOL)_registeredAsChangeObserver;
- (void)set_registeredAsChangeObserver:;
- (BOOL)_registeredAsInputDrawingsClient;
- (void)set_registeredAsInputDrawingsClient:;
+ (id)availableRecognitionSessionStatusKeys;
+ (id)localizedNameForRecognitionSessionStatusKey:;
+ (id)availableVisualizationIdentifiers;
+ (id)localizedNameForVisualizationIdentifier:;
+ (Class)_classForVisualizationIdentifier:;
+ (BOOL)variableHeightForRecognitionSessionStatusKey:;
+ (id)newColorForVisualizedItemAtIndex:;
@end
