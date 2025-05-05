@interface SSBLookupResult : NSObject
@property (nonatomic) NSArray serviceLookupResults;
@property (nonatomic) BOOL URLContainsUserInfo;
@property (nonatomic) BOOL phishing;
@property (nonatomic) BOOL malware;
@property (nonatomic) BOOL unwantedSoftware;
@property (nonatomic) BOOL knownToBeUnsafe;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isPhishing;
- (BOOL)isUnwantedSoftware;
- (id)serviceLookupResults;
- (BOOL)isMalware;
- (id)_initWithServiceLookUpResults:URLContainsUserInfo:;
- (id)_initWithServiceLookUpResults:;
- (BOOL)isKnownToBeUnsafe;
- (BOOL)URLContainsUserInfo;
+ (BOOL)supportsSecureCoding;
@end
