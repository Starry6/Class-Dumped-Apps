@interface AWEMRSubscribeManageTracker : NSObject
@property (nonatomic) AWEMRSubscribeManageDataContext dataContext;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) NSNumber transferBeginTimestamp;
@property (nonatomic) BOOL didTrackPageShow;
- (BOOL)isViewDidAppear;
- (id)dataContext;
- (void)setIsViewDidAppear:;
- (void)setDataContext:;
- (void)setTransferBeginTimestamp:;
- (BOOL)didTrackPageShow;
- (void)setDidTrackPageShow:;
- (id)transferBeginTimestamp;
- (void)trackPageShowFromViewDidAppear:transferBeginTimestamp:;
- (void).cxx_destruct;
+ (id)trackerWithDataContext:;
@end
