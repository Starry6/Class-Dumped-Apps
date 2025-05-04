@interface AWEFeedChannelLeaveModel : AWEFeedChannelTrackBaseModel
@property (nonatomic) NSString nextTabID;
@property (nonatomic) q leaveType;
@property (nonatomic) NSString leaveMethod;
@property (nonatomic) NSString leaveTo;
- (id)leaveTo;
- (long long)leaveType;
- (void)setLeaveType:;
- (void)setNextTabID:;
- (void)setLeaveTo:;
- (void)setLeaveMethod:;
- (id)leaveMethod;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)nextTabID;
- (id)copyWithZone:;
@end
