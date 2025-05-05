@interface IESLiveRevenueInteractVoteThemeViewModel : NSObject
@property (nonatomic) HTSLivePKApi api;
@property (nonatomic) NSNumber selectedDuration;
@property (nonatomic) VoteSetting selectedVote;
@property (nonatomic) NSArray durationArray;
@property (nonatomic) NSArray voteArray;
- (void)resortVoteArray;
- (void)beginVote;
- (void)beginVoteInLink:;
- (void)beginVoteInPK:;
- (id)defaultDurationArray;
- (id)durationArray;
- (void)fetchVoteList;
- (id)initWithDIContext:;
- (BOOL)isDoubleInteract;
- (id)selectedVote;
- (void)setDurationArray:;
- (void)setSelectedDuration:;
- (void)setSelectedVote:;
- (void)setVoteArray:;
- (void)trackWithEvent:extraParams:;
- (id)voteArray;
- (void).cxx_destruct;
- (id)api;
- (id)selectedDuration;
- (void)setApi:;
@end
