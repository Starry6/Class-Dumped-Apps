@interface PLCloudDownloadBatchDetails : NSObject
@property (nonatomic) BOOL hasResourceChanges;
@property (nonatomic) BOOL needsWidgetTimelineReload;
@property (nonatomic) q numberOfPhotos;
@property (nonatomic) q numberOfVideos;
@property (nonatomic) NSArray cmmUUIDsToNotify;
@property (nonatomic) NSSet confirmedResourceIDs;
- (void).cxx_destruct;
- (long long)numberOfPhotos;
- (void)setNumberOfPhotos:;
- (long long)numberOfVideos;
- (void)unionBatchDetails:;
- (BOOL)hasResourceChanges;
- (void)setHasResourceChanges:;
- (BOOL)needsWidgetTimelineReload;
- (void)setNeedsWidgetTimelineReload:;
- (void)setNumberOfVideos:;
- (id)cmmUUIDsToNotify;
- (void)setCmmUUIDsToNotify:;
- (id)confirmedResourceIDs;
- (void)setConfirmedResourceIDs:;
@end
