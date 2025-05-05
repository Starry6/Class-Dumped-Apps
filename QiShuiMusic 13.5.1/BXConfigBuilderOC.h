@interface BXConfigBuilderOC : NSObject
@property (nonatomic) ByteBenchConfigOC config;
- (id)buildLibraInfo:;
- (id)buildWorksapce:;
- (id)buildAppName:;
- (id)buildAppVersion:;
- (id)buildAppid:;
- (id)buildBaseUrl:;
- (id)buildDeviceId:;
- (id)buildDeviceModel:;
- (id)buildLogLevel:;
- (id)buildNetTagBlock:;
- (id)buildNewConfig;
- (id)buildUpdateVersionCode:;
- (id)buildUserId:;
- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)config;
@end
