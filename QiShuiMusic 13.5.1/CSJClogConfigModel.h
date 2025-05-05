@interface CSJClogConfigModel : NSObject
@property (nonatomic) BOOL isOpen;
@property (nonatomic) q logLevel;
@property (nonatomic) Q expireDays;
@property (nonatomic) Q maxSize;
@property (nonatomic) q privacyLevel;
- (unsigned long long)expireDays;
- (void)setExpireDays:;
- (void)setupDataWithDictionary:;
- (unsigned long long)maxSize;
- (void)setMaxSize:;
- (BOOL)isOpen;
- (void)setPrivacyLevel:;
- (void)setIsOpen:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)setLogLevel:;
- (void)encodeWithCoder:;
- (long long)logLevel;
- (long long)privacyLevel;
@end
