@interface AWELuckyCatSendGoldCollectResponseModel : AWEBaseApiModel
@property (nonatomic) q errNO;
@property (nonatomic) NSString errTips;
@property (nonatomic) NSString toast;
@property (nonatomic) AWELuckyCatSendGoldCollectTaskFinishInfo taskFinishInfo;
@property (nonatomic) NSString effectID;
- (void)setEffectID:;
- (id)errTips;
- (void)setErrTips:;
- (long long)errNO;
- (void)setErrNO:;
- (id)taskFinishInfo;
- (void)setTaskFinishInfo:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (id)effectID;
+ (id)taskFinishInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
