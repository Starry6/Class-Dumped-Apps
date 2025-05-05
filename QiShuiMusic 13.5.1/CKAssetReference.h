@interface CKAssetReference : NSObject
@property (nonatomic) q databaseScope;
@property (nonatomic) CKRecordID recordID;
@property (nonatomic) NSString fieldName;
@property (nonatomic) NSData fileSignature;
- (long long)databaseScope;
- (id)fileSignature;
- (void)setDatabaseScope:;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)fieldName;
- (void)encodeWithCoder:;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithExistingRecordID:databaseScope:fieldName:fileSignature:;
+ (BOOL)supportsSecureCoding;
@end
