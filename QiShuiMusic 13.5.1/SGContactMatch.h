@interface SGContactMatch : NSObject
@property (nonatomic) SGContact contact;
@property (nonatomic) SGObject matchingField;
@property (nonatomic) q matchingFieldType;
@property (nonatomic) NSArray matchTokens;
@property (nonatomic) SGMatchedDetails matchedDetails;
- (id)contact;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContact:matchTokens:matchInfo:;
- (id)initWithContact:matchingFieldRecordId:matchTokens:;
- (id)initWithContact:matchingEmailAddressRecordId:;
- (id)initWithContact:matchingNameRecordId:;
- (id)initWithContact:matchingNameRecordId:matchTokens:;
- (id)initWithContact:matchingEmailAddressRecordId:matchTokens:;
- (id)initWithContact:matchingPhoneRecordId:matchTokens:;
- (id)initWithContact:matchingRecordId:matchType:matchTokens:;
- (BOOL)isEqualToContactMatch:;
- (id)matchingField;
- (long long)matchingFieldType;
- (id)matchTokens;
- (id)matchedDetails;
+ (BOOL)supportsSecureCoding;
@end
