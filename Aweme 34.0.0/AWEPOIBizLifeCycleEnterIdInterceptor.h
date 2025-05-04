@interface AWEPOIBizLifeCycleEnterIdInterceptor : NSObject
@property (nonatomic) NSDictionary enterLogConfigMap;
@property (nonatomic) NSDictionary exitLogConfigMap;
@property (nonatomic) NSSet logSet;
@property (nonatomic) BOOL isInit;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsInit:;
- (BOOL)isInit;
- (void)trackEvent:params:btmInfo:;
- (id)newTrackParamsWithEvent:oldParams:btmInfo:;
- (id)getValidBTMResponder:;
- (id)enterLogConfigMap;
- (id)exitLogConfigMap;
- (void)setEnterLogConfigMap:;
- (void)setExitLogConfigMap:;
- (id)logSet;
- (void)setLogSet:;
- (id)init;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
