@interface TKClientTokenAdvertisedItem : NSObject
@property (nonatomic) TKClientTokenSession session;
@property (nonatomic) Q keyUsage;
@property (nonatomic) NSDictionary keychainAttributes;
@property (nonatomic) NSData objectID;
@property (nonatomic) NSString localizedName;
@property (nonatomic) @ keychainClass;
@property (nonatomic) ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v} keyRef;
@property (nonatomic) ^{__SecCertificate=} certificateRef;
@property (nonatomic) ^{__SecIdentity=} identityRef;
- (id)objectID;
- (id)localizedName;
- (id)keychainAttributes;
- (id)session;
- (void).cxx_destruct;
- (unsigned long long)keyUsage;
- (id)initWithSession:keychainAttributes:secRef:;
- (id)keychainClass;
- (id)keyRef;
- (id)certificateRef;
- (id)identityRef;
@end
