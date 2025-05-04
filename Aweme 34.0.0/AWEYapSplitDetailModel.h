@interface AWEYapSplitDetailModel : AWEBaseApiModel
@property (nonatomic) q totalAmount;
@property (nonatomic) q yapCount;
@property (nonatomic) q unYapCount;
- (long long)unYapCount;
- (long long)yapCount;
- (void)setYapCount:;
- (void)setUnYapCount:;
- (void)setTotalAmount:;
- (long long)totalAmount;
+ (id)JSONKeyPathsByPropertyKey;
@end
