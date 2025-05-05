@interface IDSLocalPairingRecord : NSObject
@property (nonatomic) NSDictionary protectionClassIdentityDataMap;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)identityDataForDataProtectionClass:error:;
- (id)initWithIdentityDataClassA:classC:classD:;
- (id)protectionClassIdentityDataMap;
- (void)setProtectionClassIdentityDataMap:;
+ (BOOL)supportsSecureCoding;
@end
