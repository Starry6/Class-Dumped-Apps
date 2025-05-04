@interface AWELiveVSCacheVideoTracker : NSObject
- (id)commonParams;
- (id)paramsWithEvent:model:;
- (id)getDownloadStatusDict:;
- (id)getVideoShowDict:;
- (id)getDeleteClickDict:;
- (id)getDownloadStatus:;
- (id)getVideoResolutionString:;
- (void)trackWithKey:model:;
@end
