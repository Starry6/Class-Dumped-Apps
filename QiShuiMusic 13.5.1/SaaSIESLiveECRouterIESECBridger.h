@interface SaaSIESLiveECRouterIESECBridger : NSObject
@property (nonatomic) <IESLiveSaaSContainerRouter> protoObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openSchema:;
- (void)openSchema:fromInside:;
- (id)protoObj;
- (void)setProtoObj:;
- (void).cxx_destruct;
+ (id)bridgedProtocol;
+ (id)bridgedInstanceWithObj:;
@end
