@interface SSBServiceLookupResult : NSObject
@property (nonatomic) NSString provider;
@property (nonatomic) BOOL phishing;
@property (nonatomic) BOOL malware;
@property (nonatomic) BOOL unwantedSoftware;
@property (nonatomic) BOOL knownToBeUnsafe;
@property (nonatomic) NSString malwareDetailsBaseURLString;
@property (nonatomic) NSURL learnMoreURL;
@property (nonatomic) NSString reportAnErrorBaseURLString;
@property (nonatomic) NSString localizedProviderDisplayName;
- (id)initWithCoder:;
- (id)provider;
- (void)encodeWithCoder:;
- (id).cxx_construct;
- (id)learnMoreURL;
- (id)copyWithZone:;
- (BOOL)isPhishing;
- (id)malwareDetailsBaseURLString;
- (BOOL)isUnwantedSoftware;
- (id)reportAnErrorBaseURLString;
- (id)localizedProviderDisplayName;
- (BOOL)isMalware;
- (BOOL)isKnownToBeUnsafe;
- (id)_initWithLookupResult:;
+ (BOOL)supportsSecureCoding;
@end
