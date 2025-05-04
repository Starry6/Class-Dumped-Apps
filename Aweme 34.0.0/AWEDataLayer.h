@interface AWEDataLayer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setLogCallback:;
+ (id)fetchDataWithNetworkProvider:config:completion:;
+ (id)fetchDataWithNetworkProvider:config:lifeCycleObject:completion:;
+ (void)setupNetworkImpl:;
+ (id)getAllTokenWithRequestIdentifier:;
+ (void)setDebugLogCallback:;
+ (void)setTrackCallback:;
@end
