@interface CKSyncEngineRecordModification : NSObject
@property (nonatomic) CKRecordID recordID;
@property (nonatomic) q type;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithRecordID:type:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (id)oppositeTypeModification;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)recordModificationsWithOppositeTypeFromRecordModifications:;
@end
