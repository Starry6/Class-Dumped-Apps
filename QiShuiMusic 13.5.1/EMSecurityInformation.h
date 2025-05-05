@interface EMSecurityInformation : NSObject
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL isSigned;
@property (nonatomic) NSArray signers;
@property (nonatomic) BOOL hasEncryptedDescendantPart;
@property (nonatomic) NSError smimeError;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (BOOL)isEncrypted;
- (id)initWithCoder:;
- (BOOL)isSigned;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)signers;
- (id)initWithSigners:isEncrypted:hasEncryptedDescendantPart:smimeError:;
- (BOOL)hasEncryptedDescendantPart;
- (id)smimeError;
- (void)reevaluateTrustWithNetworkAccessAllowed;
+ (BOOL)supportsSecureCoding;
@end
