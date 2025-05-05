@interface BDLocationCertCheckResult : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL isEmptyCert;
@property (nonatomic) NSDictionary params;
- (void)setIsEmptyCert:;
- (BOOL)isEmptyCert;
- (void)setIsValid:;
- (void)setError:;
- (id)error;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
