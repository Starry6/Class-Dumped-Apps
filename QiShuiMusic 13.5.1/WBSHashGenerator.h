@interface WBSHashGenerator : NSObject
@property (nonatomic) NSData key;
@property (nonatomic) NSData keyID;
- (id)init;
- (id)key;
- (id)keyID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithKey:keyID:;
- (id)generateHashStringWithComponents:;
- (id)generateHashWithComponents:;
- (id)_createEncryptionKeyData;
- (id)_createEncryptionKeyIDDataUsingKey:;
+ (BOOL)supportsSecureCoding;
@end
