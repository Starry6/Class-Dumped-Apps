@interface AWEMRSubscribeManageDetailTracker : NSObject
@property (nonatomic) AWEMRSubscribeManageDetailDataContext dataContext;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) NSNumber transferBeginTimestamp;
@property (nonatomic) BOOL didTrackPageShow;
@property (nonatomic) BOOL didTrackPageClick;
- (BOOL)isViewDidAppear;
- (id)dataContext;
- (void)setIsViewDidAppear:;
- (void)setDataContext:;
- (void)setTransferBeginTimestamp:;
- (BOOL)didTrackPageShow;
- (void)setDidTrackPageShow:;
- (id)transferBeginTimestamp;
- (BOOL)didTrackPageClick;
- (void)setDidTrackPageClick:;
- (void)trackPageShowFromViewDidAppear:transferBeginTimestamp:;
- (void)trackPageClick;
- (void).cxx_destruct;
+ (id)trackerWithDataContext:;
@end
