@interface PPScoredContact : NSObject
@property (nonatomic) PPContact contact;
@property (nonatomic) double score;
@property (nonatomic) C flags;
@property (nonatomic) NSArray scoredPhoneNumbers;
@property (nonatomic) NSArray scoredEmailAddresses;
@property (nonatomic) NSArray scoredSocialProfiles;
@property (nonatomic) NSArray scoredPostalAddresses;
- (double)score;
- (id)contact;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithContact:scoredPhoneNumbers:scoredEmailAddresses:scoredSocialProfiles:scoredPostalAddresses:score:flags:;
- (void)encodeWithCoder:;
- (long long)reverseCompare:;
- (id)scoredEmailAddresses;
- (long long)compare:;
- (BOOL)isEqualToScoredContact:;
- (id)scoredPostalAddresses;
- (void).cxx_destruct;
- (id)scoredPhoneNumbers;
- (id)description;
- (id)scoredSocialProfiles;
- (unsigned char)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)scoredContactWithContact:scoredPhoneNumbers:scoredEmailAddresses:scoredSocialProfiles:scoredPostalAddresses:score:flags:;
@end
