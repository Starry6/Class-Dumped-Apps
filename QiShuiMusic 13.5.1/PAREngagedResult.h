@interface PAREngagedResult : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString searchString;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSData encodedNormalizedTopic;
@property (nonatomic) NSDate engagementTime;
@property (nonatomic) double score;
@property (nonatomic) double freshnessScore;
- (void)setSearchString:;
- (id)init;
- (id)searchString;
- (double)score;
- (void)setType:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)type;
- (id)title;
- (void)setScore:;
- (void).cxx_destruct;
- (id)engagementTime;
- (double)freshnessScore;
- (id)encodedNormalizedTopic;
- (void)setEncodedNormalizedTopic:;
- (void)setEngagementTime:;
- (void)setFreshnessScore:;
+ (BOOL)supportsSecureCoding;
@end
