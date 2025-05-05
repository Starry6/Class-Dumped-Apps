@interface CKRecordChange : NSObject
@property (nonatomic) q changeType;
@property (nonatomic) CKRecordID recordID;
@property (nonatomic) CKRecord record;
@property (nonatomic) NSError error;
- (long long)changeType;
- (id)record;
- (id)initWithChangeType:recordID:record:error:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)recordID;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
