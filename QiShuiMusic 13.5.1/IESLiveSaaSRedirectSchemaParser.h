@interface IESLiveSaaSRedirectSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaHandler;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictFromQueryString:;
- (void)handleSchemeFromConfigWithModel:fromInside:completion:;
- (BOOL)isWebcastUrl:;
- (void)parseWithParams:fromInside:completion:;
- (void)reportFailWith:category:extra:;
- (void)reportStatusWith:category:extra:;
- (id)schemaHandler;
- (void)setSchemaHandler:;
- (void)transToRealSchemeWith:parserParams:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (void)ieslivekit_register_schema;
@end
