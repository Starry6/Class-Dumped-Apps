@interface AWEMRPermissionAlertTracker : NSObject
@property (nonatomic) NSString eventID;
@property (nonatomic) NSString permissionType;
@property (nonatomic) BOOL didTrackShow;
@property (nonatomic) BOOL didTrackClick;
@property (nonatomic) double beginMediaTime;
@property (nonatomic) NSDictionary commonParamDict;
@property (nonatomic) <AWEMRPermissionAlertTrackerDelegate> delegate;
- (void)trackShow;
- (BOOL)didTrackShow;
- (void)setDidTrackShow:;
- (BOOL)didTrackClick;
- (void)setDidTrackClick:;
- (void)setCommonParamDict:;
- (id)commonParamDict;
- (id)initWithEventID:permissionType:;
- (void)trackClickWithState:;
- (void)setBeginMediaTime:;
- (double)beginMediaTime;
- (id)getClickTypeWithState:;
- (id)delegate;
- (id)eventID;
- (void).cxx_destruct;
- (void)setEventID:;
- (void)setDelegate:;
- (id)permissionType;
- (void)setPermissionType:;
@end
