@interface BDHybridCertValidateResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary additionInfo;
- (id)additionInfo;
- (void)setAdditionInfo:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
