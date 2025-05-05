@interface SaaSIESECLivePerfSamplerIESECBridger : NSObject
@property (nonatomic) <IESLivePerfSampler> protoObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)liveAppLogWithType:className:startTime:duration:extra:;
- (id)protoObj;
- (void)setProtoObj:;
- (void).cxx_destruct;
+ (id)bridgedProtocol;
+ (id)bridgedInstanceWithObj:;
@end
