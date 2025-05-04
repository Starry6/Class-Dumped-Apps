@interface AWEUGAlertStrategyModel : NSObject
@property (nonatomic) NSArray showFrequencyModelArray;
@property (nonatomic) NSArray alertHideModelArray;
@property (nonatomic) q timesDenied;
- (id)initWithAlertType:andStrategy:;
- (id)showFrequencyModelArray;
- (id)alertHideModelArray;
- (long long)timesDenied;
- (id)showFrequencyModelArrayWithAlertType:andStrategy:;
- (id)alertHideModelArrayWithAlertType:andStrategy:;
- (long long)timesDenied:andStrategy:;
- (void)setShowFrequencyModelArray:;
- (void)setAlertHideModelArray:;
- (void)setTimesDenied:;
- (void).cxx_destruct;
@end
