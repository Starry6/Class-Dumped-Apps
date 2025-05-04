@interface AWEGeneralSearchImpressionManager : NSObject
@property (nonatomic) q maxCount;
@property (nonatomic) NSMutableArray impressionArray;
@property (nonatomic) NSMutableDictionary impressionIndexDict;
- (id)impressionArray;
- (void)addImpressionWithViewModel:;
- (id)getImpressionLogData;
- (void)setImpressionArray:;
- (void)setImpressionIndexDict:;
- (id)impressionIndexDict;
- (void)setMaxCount:;
- (id)init;
- (long long)maxCount;
- (void).cxx_destruct;
@end
