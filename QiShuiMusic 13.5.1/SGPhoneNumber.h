@interface SGPhoneNumber : SGLabeledObject
@property (nonatomic) NSString phoneNumber;
- (id)phoneNumber;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isEqualToPhoneNumber:;
- (id)initWithPhoneNumber:label:extractionInfo:recordId:;
+ (BOOL)supportsSecureCoding;
+ (id)phoneNumber:label:extractionInfo:recordId:;
+ (id)phoneNumber:label:extractionType:recordId:origin:;
+ (id)phoneNumber:label:extractionType:recordId:;
@end
