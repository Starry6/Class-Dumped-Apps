@interface IESLiveSaaSItmsSchemaParser : NSObject
@property (nonatomic) IESLiveSaaSWebShareTokenApi shareTokenApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseWithParams:fromInside:completion:;
- (void)setShareTokenApi:;
- (id)shareTokenApi;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
