@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata
@property (nonatomic) NSArray referenceSignatures;
@property (nonatomic) NSArray fileSignatures;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:;
- (id)fileSignatures;
- (id)referenceSignatures;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:fileSignatures:referenceSignatures:;
+ (BOOL)supportsSecureCoding;
@end
