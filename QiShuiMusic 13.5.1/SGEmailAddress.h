@interface SGEmailAddress : SGLabeledObject
@property (nonatomic) NSString emailAddress;
- (id)emailAddress;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithEmailAddress:label:extractionInfo:recordId:;
- (BOOL)isEqualToEmailAddress:;
+ (BOOL)supportsSecureCoding;
+ (id)emailAddress:label:extractionInfo:withRecordId:;
+ (id)emailAddress:label:extractionType:withRecordId:origin:;
+ (id)emailAddress:label:extractionType:withRecordId:;
@end
