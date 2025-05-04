@interface AWEHPLeaveTabTrackModel : NSObject
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabID;
@property (nonatomic) AWEFeedChannelLeaveModel leaveModel;
- (long long)tabType;
- (void)setTabType:;
- (void)setTabID:;
- (void)setLeaveModel:;
- (id)leaveModel;
- (void).cxx_destruct;
- (id)tabID;
@end
