@interface AWEAccountTrustJudgeResult : NSObject
@property (nonatomic) BOOL enableShow;
@property (nonatomic) BOOL prerequisitesSatisfy;
@property (nonatomic) BOOL hasRequestTrustUrl;
@property (nonatomic) BOOL hasTrustData;
- (BOOL)enableShow;
- (void)setEnableShow:;
- (BOOL)prerequisitesSatisfy;
- (void)setPrerequisitesSatisfy:;
- (BOOL)hasRequestTrustUrl;
- (void)setHasRequestTrustUrl:;
- (void)setHasTrustData:;
- (BOOL)hasTrustData;
@end
