@interface AWEElementStrategyContext : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWEAwemeModel fromModel;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) q mediaType;
@property (nonatomic) Q strategyType;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)fromModel;
- (void)setFromModel:;
- (id)enterFrom;
- (void)setStrategyType:;
- (unsigned long long)strategyType;
- (BOOL)isDouDiscountInnerPage;
- (BOOL)isDouDiscountInnerPageWithV2Experiment;
- (void)setMediaType:;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
@end
