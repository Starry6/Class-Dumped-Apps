@interface AWEMusicStreamingImpl.LunaOrderInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q settleAmount;
- (long long)settleAmount;
- (void)setSettleAmount:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
