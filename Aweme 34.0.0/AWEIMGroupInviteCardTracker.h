@interface AWEIMGroupInviteCardTracker : NSObject
@property (nonatomic) NSMutableSet trackedEvents;
@property (nonatomic) q type;
@property (nonatomic) NSDictionary groupParams;
@property (nonatomic) NSMutableDictionary durations;
@property (nonatomic) NSDictionary verificationParams;
@property (nonatomic) BOOL didClickJoinGroup;
- (id)trackedEvents;
- (void)setTrackedEvents:;
- (id)requestParamSecretType;
- (id)p_groupQosJoinGroupStart;
- (id)p_groupQosJoinGroupPrepare;
- (id)p_trackPanelTypeOfCardType:;
- (id)p_enterFromParam;
- (void)setVerificationParams:;
- (id)verificationParams;
- (void)setDidClickJoinGroup:;
- (BOOL)didClickJoinGroup;
- (id)p_cardTypeToEnterFromMap;
- (id)initWithType:groupParams:;
- (void)markJoinGroupStartAndPrepare;
- (void)trackJoinGroupStartWithResult:;
- (void)trackJoinGroupPrepare;
- (void)markClickJoinGroup;
- (void)trackJoinGroupQuit;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)durations;
- (void)setDurations:;
- (void)setGroupParams:;
- (id)groupParams;
@end
