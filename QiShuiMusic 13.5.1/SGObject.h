@interface SGObject : NSObject
@property (nonatomic) SGRecordId recordId;
@property (nonatomic) SGOrigin origin;
- (id)recordId;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)origin;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToSuggestion:;
- (id)initWithRecordId:origin:;
+ (BOOL)supportsSecureCoding;
@end
