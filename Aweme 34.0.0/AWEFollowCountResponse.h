@interface AWEFollowCountResponse : AWESocialRelationResponse
@property (nonatomic) q mutualFollowCount;
@property (nonatomic) q singleFollowCount;
@property (nonatomic) q mutualAndSingleFollowCount;
- (long long)mutualFollowCount;
- (long long)singleFollowCount;
- (long long)mutualAndSingleFollowCount;
- (void)setMutualFollowCount:;
- (void)setSingleFollowCount:;
- (void)setMutualAndSingleFollowCount:;
- (BOOL)isEqual:;
@end
