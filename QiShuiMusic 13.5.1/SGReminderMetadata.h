@interface SGReminderMetadata : NSObject
@property (nonatomic) SGRecordId recordId;
@property (nonatomic) NSString sourceUniqueIdentifier;
- (id)recordId;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRecordId:sourceUniqueIdentifier:;
- (BOOL)isEqualToReminderMetadata:;
- (id)sourceUniqueIdentifier;
+ (BOOL)supportsSecureCoding;
@end
