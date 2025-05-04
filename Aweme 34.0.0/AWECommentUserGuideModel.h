@interface AWECommentUserGuideModel : AWEBaseApiModel
@property (nonatomic) AWECommentUserGuideTipsModel tipsModel;
@property (nonatomic) AWECommentUserGuideAlertModel alertModel;
@property (nonatomic) NSString scene;
@property (nonatomic) q freqDay;
@property (nonatomic) q freqNum;
@property (nonatomic) NSString storageKey;
@property (nonatomic) @? jumpBlock;
- (id)jumpBlock;
- (id)tipsModel;
- (void)setJumpBlock:;
- (long long)freqDay;
- (long long)freqNum;
- (id)alertModel;
- (void)setAlertModel:;
- (id)storageKey;
- (void)setStorageKey:;
- (void)setFreqDay:;
- (void)setFreqNum:;
- (void)setTipsModel:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (id)alertModelJSONTransformer;
+ (id)tipsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
