@interface AWEPerfFMPCalculateResultModel : NSObject
@property (nonatomic) Q result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) NSInteger totalCalculateCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) NSInteger totalCalculateCount;
@property (nonatomic) NSDictionary fmpLastViewDictionary;
- (double)totalCostTime;
- (void)setTotalCostTime:;
- (int)totalCalculateCount;
- (void)setTotalCalculateCount:;
- (id)fmpLastViewDictionary;
- (void)setFmpLastViewDictionary:;
- (void)setResult:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)result;
@end
