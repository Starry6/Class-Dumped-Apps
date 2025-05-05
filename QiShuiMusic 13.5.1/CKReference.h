@interface CKReference : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q referenceAction;
@property (nonatomic) CKRecordID recordID;
- (id)ckShortDescription;
- (id)init;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_initBare;
- (id)debugDescription;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)recordID;
- (void).cxx_destruct;
- (id)initWithRecordID:action:;
- (unsigned long long)referenceAction;
- (id)initWithRecord:action:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (int)ckdpReferenceTypeForCKReferenceAction:;
+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:;
@end
