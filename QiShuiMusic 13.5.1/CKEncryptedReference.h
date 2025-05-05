@interface CKEncryptedReference : CKEncryptedData
@property (nonatomic) CKReference reference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reference;
- (id)value;
- (id)initWithReference:;
- (id)_pReferenceFromReference:;
- (id)_referenceFromPReference:;
- (id)_recordIDFromPRecordIdentifier:;
@end
