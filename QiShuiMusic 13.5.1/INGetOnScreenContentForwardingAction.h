@interface INGetOnScreenContentForwardingAction : INIntentForwardingAction
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) WFOnScreenContentServiceOptions serviceOptions;
- (id)sceneIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSceneIdentifier:serviceOptions:;
- (id)serviceOptions;
+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;
@end
