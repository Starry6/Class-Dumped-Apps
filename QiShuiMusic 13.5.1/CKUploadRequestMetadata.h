@interface CKUploadRequestMetadata : NSObject
@property (nonatomic) CKRecordID repairZoneRecordID;
@property (nonatomic) q databaseScope;
@property (nonatomic) CKRecordID recordID;
@property (nonatomic) NSString recordType;
@property (nonatomic) NSString fieldName;
- (long long)databaseScope;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)recordType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)fieldName;
- (void)encodeWithCoder:;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)repairZoneRecordID;
- (id)initWithRepairZoneRecordID:databaseScope:recordID:recordType:fieldName:;
+ (BOOL)supportsSecureCoding;
@end
