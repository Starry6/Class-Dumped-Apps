@interface AWELuckyCatSendGoldCollectNewResponseModel : AWELiteBaseApiModel
@property (nonatomic) NSString toast;
@property (nonatomic) AWELuckyCatSendGoldCollectTaskFinishInfo taskFinishInfo;
@property (nonatomic) NSString effectID;
- (void)setEffectID:;
- (id)taskFinishInfo;
- (void)setTaskFinishInfo:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (id)effectID;
+ (id)taskFinishInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
