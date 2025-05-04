@interface AWEHPSideBarEntranceTouchSessionTracker : NSObject
@property (nonatomic) double touchesBeganTimestamp;
@property (nonatomic) BOOL isTapFailed;
@property (nonatomic) BOOL isPrefetchSideBarDataTriggered;
@property (nonatomic) BOOL requestSideBarDataResult;
@property (nonatomic) BOOL hasTrackTapFailedEvent;
@property (nonatomic) BOOL hasTrackDurationEvent;
- (void)setTouchesBeganTimestamp:;
- (void)setIsTapFailed:;
- (void)p_trackTapFailedIfNeeded;
- (void)setIsPrefetchSideBarDataTriggered:;
- (void)setRequestSideBarDataResult:;
- (void)p_trackDurationIfNeeded;
- (BOOL)isTapFailed;
- (BOOL)isPrefetchSideBarDataTriggered;
- (BOOL)requestSideBarDataResult;
- (BOOL)hasTrackTapFailedEvent;
- (void)setHasTrackTapFailedEvent:;
- (BOOL)hasTrackDurationEvent;
- (void)setHasTrackDurationEvent:;
- (double)touchesBeganTimestamp;
- (void)tapFailed;
- (void)prefetchSideBarDataTriggered;
- (void)sideBarDataRequestCompletedWithResult:;
- (void)touchesBegan;
@end
