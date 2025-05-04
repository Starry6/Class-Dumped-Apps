@interface AWETeenVoteVideoInfo : AWEBaseApiModel
@property (nonatomic) NSNumber voteID;
@property (nonatomic) NSString voteTitle;
@property (nonatomic) NSString acceptOption;
@property (nonatomic) q acceptOptionID;
@property (nonatomic) NSString rejectOption;
@property (nonatomic) q rejectOptionID;
@property (nonatomic) BOOL hasOperated;
- (id)voteID;
- (void)setVoteID:;
- (id)voteTitle;
- (void)setVoteTitle:;
- (id)acceptOption;
- (void)setAcceptOption:;
- (long long)acceptOptionID;
- (void)setAcceptOptionID:;
- (id)rejectOption;
- (void)setRejectOption:;
- (long long)rejectOptionID;
- (void)setRejectOptionID:;
- (BOOL)hasOperated;
- (void)setHasOperated:;
- (void).cxx_destruct;
@end
