@interface IESLiveSaaSActionsSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_parseActions:;
- (void)p_parseSchemaModel:;
- (void)parseWithParams:fromInside:completion:;
- (id)schemaHandler;
- (void)setSchemaHandler:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
+ (id)schemaHost;
@end
