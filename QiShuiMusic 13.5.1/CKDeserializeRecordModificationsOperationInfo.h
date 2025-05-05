@interface CKDeserializeRecordModificationsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSData serializedModifications;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)serializedModifications;
- (void)setSerializedModifications:;
+ (BOOL)supportsSecureCoding;
@end
