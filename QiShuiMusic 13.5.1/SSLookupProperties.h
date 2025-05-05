@interface SSLookupProperties : NSObject
@property (nonatomic) NSString keyProfile;
@property (nonatomic) q localizationStyle;
@property (nonatomic) CLLocation location;
@property (nonatomic) NSNumber timeoutInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (void)setKeyProfile:;
- (id)copyXPCEncoding;
- (id)keyProfile;
- (id)location;
- (id)timeoutInterval;
- (void)setValue:forRequestParameter:;
- (void)setLocation:;
- (void)setTimeoutInterval:;
- (id)copyWithZone:;
- (id)copyRequestParameters;
- (id)valueForRequestParameter:;
- (long long)localizationStyle;
- (void)setLocalizationStyle:;
@end
