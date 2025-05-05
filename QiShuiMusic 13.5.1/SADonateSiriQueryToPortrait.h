@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand
@property (nonatomic) NSString domain;
@property (nonatomic) NSString originalQuery;
@property (nonatomic) NSString qid;
@property (nonatomic) q rank;
@property (nonatomic) double rankerConfidence;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (long long)rank;
- (id)encodedClassName;
- (id)domain;
- (void)setRank:;
- (void)setDomain:;
- (id)qid;
- (void)setQid:;
- (id)originalQuery;
- (void)setOriginalQuery:;
- (double)rankerConfidence;
- (void)setRankerConfidence:;
+ (id)donateSiriQueryToPortrait;
+ (id)donateSiriQueryToPortraitWithDictionary:context:;
@end
