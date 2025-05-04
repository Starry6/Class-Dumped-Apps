@interface AWEDataLayerNetworkRequestFrequencyControlManager : NSObject
@property (nonatomic) NSMutableDictionary requestIdToTimestampMap;
- (void)setRequestIdToTimestampMap:;
- (id)requestIdToTimestampMap;
- (void)didFinishRequest:;
- (BOOL)validateRequestIdentifier:;
- (void)didEnterBackground;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
