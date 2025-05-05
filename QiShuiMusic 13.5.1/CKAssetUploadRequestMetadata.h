@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata
@property (nonatomic) NSData referenceSignature;
@property (nonatomic) q listIndex;
@property (nonatomic) NSData fileSignature;
- (id)referenceSignature;
- (id)fileSignature;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)listIndex;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:fileSignature:referenceSignature:;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:fileSignature:referenceSignature:listIndex:;
+ (BOOL)supportsSecureCoding;
@end
