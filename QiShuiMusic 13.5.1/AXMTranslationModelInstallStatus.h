@interface AXMTranslationModelInstallStatus : NSObject
@property (nonatomic) q progress;
@property (nonatomic) NSString localeIdentifier;
@property (nonatomic) Q state;
- (void)setState:;
- (void)setProgress:;
- (long long)progress;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)localeIdentifier;
- (void)setLocaleIdentifier:;
@end
