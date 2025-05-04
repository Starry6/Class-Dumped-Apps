@interface AWESearchRequestParamsCenter : NSObject
@property (nonatomic) NSMutableDictionary currentProvidersMap;
@property (nonatomic) NSMutableArray currentProviders;
- (id)getParamsWithContext:;
- (id)currentProvidersMap;
- (id)currentProviders;
- (void)registerProviders:;
- (void)setCurrentProvidersMap:;
- (void)setCurrentProviders:;
- (id)init;
- (void).cxx_destruct;
@end
