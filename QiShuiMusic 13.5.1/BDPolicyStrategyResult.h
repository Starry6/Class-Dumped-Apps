@interface BDPolicyStrategyResult : NSObject
@property (nonatomic) BOOL noCert;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL treatErrorAsWarning;
@property (nonatomic) BOOL stopValidate;
@property (nonatomic) BOOL ignoreCustomErrorStrategy;
@property (nonatomic) @ data;
- (BOOL)ignoreCustomErrorStrategy;
- (BOOL)noCert;
- (void)setIgnoreCustomErrorStrategy:;
- (void)setNoCert:;
- (void)setStopValidate:;
- (void)setTreatErrorAsWarning:;
- (BOOL)stopValidate;
- (BOOL)treatErrorAsWarning;
- (id)data;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)setData:;
@end
