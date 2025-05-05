@interface IESLiveSaaSADPopupSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> urlSchemaHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseWithParams:fromInside:completion:;
- (void)setUrlSchemaHandler:;
- (id)urlSchemaHandler;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
