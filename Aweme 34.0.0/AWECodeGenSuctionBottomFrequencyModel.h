@interface AWECodeGenSuctionBottomFrequencyModel : AWEBaseDataModel
@property (nonatomic) q duration;
@property (nonatomic) NSInteger count;
- (void)setCount:;
- (void)setDuration:;
- (int)count;
- (long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
