@interface IESLiveSaaSVSFeedChainMatchModel : NSObject
@property (nonatomic) q matchID;
@property (nonatomic) NSString matchTitle;
@property (nonatomic) NSArray matchBackgroundURLs;
@property (nonatomic) NSString leftName;
@property (nonatomic) NSString leftScore;
@property (nonatomic) NSArray leftIconURLs;
@property (nonatomic) NSString rightName;
@property (nonatomic) NSString rightScore;
@property (nonatomic) NSArray rightIconURLs;
- (id)initWithData:matchBackground:;
- (id)leftIconURLs;
- (id)leftName;
- (id)leftScore;
- (id)matchBackgroundURLs;
- (id)rightIconURLs;
- (id)rightName;
- (id)rightScore;
- (void).cxx_destruct;
- (long long)matchID;
- (id)matchTitle;
@end
