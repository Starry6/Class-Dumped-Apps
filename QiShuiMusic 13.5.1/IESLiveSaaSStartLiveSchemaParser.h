@interface IESLiveSaaSStartLiveSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSContainerRouter> containerRouter;
@property (nonatomic) <IESLiveSaaSInternalRouter> internalRouter;
@property (nonatomic) <IESLiveSaaSRecoder> camera;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerRouter;
- (id)internalRouter;
- (void)p_showGuideViewController:;
- (void)parseWithParams:fromInside:completion:;
- (void)setContainerRouter:;
- (void)setInternalRouter:;
- (id)camera;
- (void)setCamera:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
