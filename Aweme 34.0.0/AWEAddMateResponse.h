@interface AWEAddMateResponse : AWESocialRelationResponse
@property (nonatomic) AWECodeGenMateRelationModel mateInfo;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)mateInfo;
- (void)setMateInfo:;
- (void).cxx_destruct;
@end
