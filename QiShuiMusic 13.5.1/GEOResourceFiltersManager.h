@interface GEOResourceFiltersManager : NSObject
@property (nonatomic) <GEOResourceFiltersManagerDelegate> delegate;
@property (nonatomic) NSSet activeScales;
@property (nonatomic) NSSet activeScenarios;
- (id)init;
- (void)setDelegate:;
- (void)activateScenario:;
- (void)_deactivateFilters:;
- (void)deactivateScenario:;
- (id)delegate;
- (void)_activateFilters:setValueBlock:;
- (void).cxx_destruct;
- (id)activeScenarios;
- (id)activeScales;
- (void)_writeToDisk;
- (id)initWithConfiguration:;
- (void)activateScale:;
- (void)deactivateScale:;
@end
