@interface AWEIMCodeGenStreakInfoChatDataModel : AWEBaseDataModel
@property (nonatomic) q expireTime;
@property (nonatomic) q canRecoverDays;
@property (nonatomic) NSArray flameInfosModelArray;
@property (nonatomic) BOOL disableConsecutiveChat;
@property (nonatomic) AWEIMCodeGenConsecutiveCountInfoModel consecutiveCountInfoModel;
@property (nonatomic) AWEIMCodeGenConsecutiveChatRelationInfoModel consecutiveRelationInfoModel;
- (id)flameInfoModelAtCurrentTime;
- (id)flameInfoModelAtTimestamp:;
- (id)initWithFlameInfosModelArray:;
- (id)flameInfosModelArray;
- (BOOL)disableConsecutiveChat;
- (id)consecutiveRelationInfoModel;
- (void)setFlameInfosModelArray:;
- (long long)canRecoverDays;
- (long long)maxEndTime;
- (void)setCanRecoverDays:;
- (void)setDisableConsecutiveChat:;
- (id)consecutiveCountInfoModel;
- (void)setConsecutiveCountInfoModel:;
- (void)setConsecutiveRelationInfoModel:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (long long)expireTime;
- (void)setExpireTime:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
