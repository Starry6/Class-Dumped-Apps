@interface STLive.LiveMonitorImp : NSObject
- (void)trackEventWith:;
- (void)trackData:logTypeStr:;
- (void)trackService:metric:category:extra:;
- (void)trackService:status:extra:;
- (void)trackService:value:extra:;
- (void)vsTrackService:metric:category:extra:;
- (id)init;
@end
