@interface CBClient : NSObject
@property (nonatomic) CBBlueLightClient blueLightClient;
@property (nonatomic) CBAdaptationClient adaptationClient;
- (id)init;
- (void)dealloc;
- (id)blueLightClient;
- (id)adaptationClient;
+ (BOOL)supportsAdaptation;
+ (BOOL)supportsBlueLightReduction;
@end
