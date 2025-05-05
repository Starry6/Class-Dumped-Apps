@interface IESLiveSaaSWithdrawSchemaParser : NSObject
@property (nonatomic) IESLiveSaaSVerify verify;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseWithParams:fromInside:completion:;
- (id)schemaHandler;
- (void)setSchemaHandler:;
- (void)setVerify:;
- (id)init;
- (void).cxx_destruct;
- (id)verify;
+ (void)ieslivekit_register_schema;
@end
