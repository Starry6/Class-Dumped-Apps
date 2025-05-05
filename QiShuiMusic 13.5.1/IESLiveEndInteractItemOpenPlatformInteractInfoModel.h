@interface IESLiveEndInteractItemOpenPlatformInteractInfoModel : IESLiveBridgeModel
@property (nonatomic) NSString appID;
@property (nonatomic) NSNumber interactType;
@property (nonatomic) BOOL interactiveScreenCast;
- (id)interactType;
- (BOOL)interactiveScreenCast;
- (void)setInteractType:;
- (void)setInteractiveScreenCast:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
