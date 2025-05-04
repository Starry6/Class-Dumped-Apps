@interface AWEPostPagePOIActivityViewModel : NSObject
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString text;
@property (nonatomic) NSString activityFenceType;
@property (nonatomic) NSString activitySource;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString activityID;
- (void)setActivitySource:;
- (id)activityFenceType;
- (void)setActivityFenceType:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)activityID;
- (void)setActivityID:;
- (id)challengeID;
- (id)activitySource;
- (void)setChallengeID:;
- (void)setShouldShow:;
@end
