@interface AWEECEcFeelGoodTriggerEventParamModel : IESLiveBridgeModel
@property (nonatomic) NSString eventID;
@property (nonatomic) NSDictionary extraUserInfo;
@property (nonatomic) NSString appKey;
- (void)setAppKey:;
- (id)appKey;
- (id)extraUserInfo;
- (void)setExtraUserInfo:;
- (id)eventID;
- (void).cxx_destruct;
- (void)setEventID:;
+ (id)modelCustomPropertyMapper;
@end
