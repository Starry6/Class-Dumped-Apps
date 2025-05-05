@interface BDPrivacyCertValidateResult : NSObject
@property (nonatomic) BOOL noCert;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary config;
- (id)certConfiguration;
- (BOOL)noCert;
- (void)setNoCert:;
- (BOOL)isEmpty;
- (void)setConfig:;
- (void)setError:;
- (id)error;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)config;
+ (id)resultWithError:;
@end
