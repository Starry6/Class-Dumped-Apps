@interface PPTopic : NSObject
@property (nonatomic) NSString clusterIdentifier;
@property (nonatomic) NSString topicIdentifier;
@property (nonatomic) PPTopicRecord mostRelevantRecord;
@property (nonatomic) double sentimentScore;
@property (nonatomic) NSSet featureNames;
- (double)sentimentScore;
- (id)id;
- (id)mostRelevantRecord;
- (id)clusterIdentifier;
- (id)featureValueForName:;
- (id)initWithTopicIdentifier:mostRelevantRecord:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)featureNames;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTopicIdentifier:;
- (BOOL)isEqualToTopic:;
- (id)topicIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)clusterIdentifierFromTopicId:;
@end
