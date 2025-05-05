@interface IESECGoodsDetailHeaderTabItem : IESECBaseApiModel
@property (nonatomic) Q tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) q startIndex;
@property (nonatomic) q totalCount;
@property (nonatomic) NSDictionary trackParams;
- (void)setTrackParams:;
- (unsigned long long)tabType;
- (void)setTabType:;
- (id)trackParams;
- (long long)totalCount;
- (void)setStartIndex:;
- (long long)startIndex;
- (void).cxx_destruct;
- (void)setTotalCount:;
- (void)setTabName:;
- (id)tabName;
+ (id)JSONKeyPathsByPropertyKey;
@end
