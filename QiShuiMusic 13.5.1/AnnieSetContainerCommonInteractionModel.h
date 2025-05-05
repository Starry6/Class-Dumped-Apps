@interface AnnieSetContainerCommonInteractionModel : IESLiveBridgeModel
@property (nonatomic) q disableBackPress;
@property (nonatomic) q disableBounce;
@property (nonatomic) BOOL disableNativeClose;
- (BOOL)modelCustomTransformFromDictionary:;
@end
