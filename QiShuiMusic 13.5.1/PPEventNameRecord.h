@interface PPEventNameRecord : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) double score;
@property (nonatomic) C changeType;
@property (nonatomic) NSString eventIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString location;
@property (nonatomic) NSArray participantNames;
- (unsigned char)changeType;
- (void)setEventIdentifier:;
- (double)score;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)eventIdentifier;
- (id)location;
- (void)setChangeType:;
- (void)encodeWithCoder:;
- (id)title;
- (void)setLocation:;
- (void)setScore:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:score:eventIdentifier:changeType:title:location:participantNames:;
- (BOOL)hasScoreSimilarToRecord:;
- (BOOL)isEqualToEventNameRecord:;
- (id)participantNames;
- (void)setParticipantNames:;
+ (BOOL)supportsSecureCoding;
+ (id)describeChangeType:;
+ (id)eventNameRecordWithScore:eventIdentifier:changeType:title:location:participantNames:;
@end
