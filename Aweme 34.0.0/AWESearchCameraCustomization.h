@interface AWESearchCameraCustomization : NSObject
@property (nonatomic) NSObject<MTLJSONSerializing> scenarioDraftModel;
- (void)setScenarioDraftModel:;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:dataContext:;
- (id)scenarioDraftModel;
- (void).cxx_destruct;
- (id)businessIdentifier;
@end
