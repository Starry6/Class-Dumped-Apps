@interface AWERewardModel : AWEBaseApiModel
@property (nonatomic) q amount;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) NSString userID;
@property (nonatomic) q tipCount;
@property (nonatomic) Q admireType;
- (long long)tipCount;
- (void)setTipCount:;
- (unsigned long long)admireType;
- (void)setAdmireType:;
- (id)userID;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserID:;
- (long long)amount;
- (void)setAmount:;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
