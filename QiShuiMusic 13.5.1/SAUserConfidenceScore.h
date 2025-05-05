@interface SAUserConfidenceScore : AceObject
@property (nonatomic) q confidenceScore;
@property (nonatomic) NSString sharedUserId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)confidenceScore;
- (void)setConfidenceScore:;
- (id)sharedUserId;
- (void)setSharedUserId:;
+ (id)userConfidenceScore;
+ (id)userConfidenceScoreWithDictionary:context:;
@end
