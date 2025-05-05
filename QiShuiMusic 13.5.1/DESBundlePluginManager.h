@interface DESBundlePluginManager : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIdentifier;
- (void)stopWithCompletion:;
- (void).cxx_destruct;
- (id)telemetryWithRecordSet:;
- (id)performDodMLTask:outError:;
- (BOOL)shouldDownloadURL:forTask:;
- (id)initWithBundleIdentifier:DESRecipeEvaluationObject:;
+ (id)pluginManagerForBundleId:error:;
@end
