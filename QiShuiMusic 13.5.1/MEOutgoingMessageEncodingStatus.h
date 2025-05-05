@interface MEOutgoingMessageEncodingStatus : NSObject
@property (nonatomic) BOOL canSign;
@property (nonatomic) BOOL canEncrypt;
@property (nonatomic) NSError securityError;
@property (nonatomic) NSArray addressesFailingEncryption;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)canEncrypt;
- (BOOL)canSign;
- (id)initWithCanSign:canEncrypt:securityError:addressesFailingEncryption:;
- (id)securityError;
- (id)addressesFailingEncryption;
+ (BOOL)supportsSecureCoding;
@end
