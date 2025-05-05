@interface FPXPCSanitizer : NSObject
@property (nonatomic) NSString providerIdentifier;
- (id)providerIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProviderDomainIdentifier:;
+ (id)permittedErrorDomains;
@end
