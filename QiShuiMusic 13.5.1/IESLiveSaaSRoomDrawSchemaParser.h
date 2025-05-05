@interface IESLiveSaaSRoomDrawSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSContainerRouter> containerRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerRouter;
- (id)p_schemaParamsWithOriginalParameter:;
- (void)parseWithParams:fromInside:completion:;
- (void)setContainerRouter:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
