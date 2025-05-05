@interface PIAMessageActionFrontendService : NSObject
@property (nonatomic) PIABiMapTable engineCallBackMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callbackFrontendAPI:engine:href:;
- (id)engineCallBackMap;
- (id)initService;
- (void)invocationFrontend:ID:version:params:engine:href:callBack:;
- (void)invokeFrontendAPI:version:params:engine:href:callBack:;
- (void)postEvent:version:params:engine:href:;
- (void)setEngineCallBackMap:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
