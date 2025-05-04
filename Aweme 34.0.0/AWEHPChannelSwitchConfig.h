@interface AWEHPChannelSwitchConfig : NSObject
@property (nonatomic) q animateType;
@property (nonatomic) BOOL useDefault;
@property (nonatomic) AWEHPChannelReloadTypeDetail reloadDetail;
@property (nonatomic) AWEFeedChannelEnterModel enterModel;
@property (nonatomic) AWEFeedChannelLeaveModel leaveModel;
- (void)setAnimateType:;
- (long long)animateType;
- (void)setEnterModel:;
- (id)enterModel;
- (void)setLeaveModel:;
- (id)leaveModel;
- (void)setUseDefault:;
- (BOOL)useDefault;
- (void)setReloadDetail:;
- (id)reloadDetail;
- (void).cxx_destruct;
@end
