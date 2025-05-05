@interface SGDateComponents : SGLabeledObject
@property (nonatomic) NSDateComponents dateComponents;
- (id)dateComponents;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)dateString;
- (id)initWithDateComponents:label:extractionInfo:recordId:;
- (BOOL)isEqualToDateComponents:;
+ (BOOL)supportsSecureCoding;
+ (id)dateComponents:label:extractionInfo:withRecordId:;
@end
