@interface IESLiveSaaSMultiCameraBasicInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage cameraIcon;
@property (nonatomic) NSString iconBackgroundColor;
@property (nonatomic) NSString panelBackgroundColor;
@property (nonatomic) BOOL banXgs;
@property (nonatomic) BOOL supportVsCore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)banXgs;
- (void)setBanXgs:;
+ (id)cameraIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
