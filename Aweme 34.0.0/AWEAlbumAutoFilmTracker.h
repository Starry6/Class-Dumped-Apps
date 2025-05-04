@interface AWEAlbumAutoFilmTracker : NSObject
+ (void)resetToolsAlbumAutoFilmPerformanceTracker;
+ (void)trackToolsAlbumAutoFilmPerformanceStart;
+ (void)trackToolsAlbumAutoFilmPerformanceTerminateError:;
+ (void)trackToolsAlbumAutoFilmPerformanceCancelWithRetryTimes:;
+ (void)updateCreateId:;
+ (void)markToolsAlbumAutoFilmPerformanceFillAssets;
+ (void)updateAssetsCountWithAssets:;
+ (void)markToolsAlbumAutoFilmPerformanceExtractFeatures;
+ (void)updateWithProcessILAResultWithMaterials:featureAlbumTypes:;
+ (void)updateTrackerRetryTimes:;
+ (void)trackToolsAlbumAutoFilmPerformanceError:stage:;
+ (void)markToolsAlbumAutoFilmPerformanceFetchList;
+ (void)markToolsAlbumAutoFilmPerformanceDownloadResources;
+ (void)updateTemplateId:templateType:;
+ (void)markToolsAlbumAutoFilmPerformanceApplyTemplate;
+ (void)markToolsAlbumAutoFilmPerformanceApplyTemplateEnd;
+ (void)addTrackerInfoWith:;
+ (void)trackToolsAlbumAutoFilmPerformanceSuccess;
+ (void)markToolsAlbumAutoFilmPerformanceEditFirstFrame;
@end
