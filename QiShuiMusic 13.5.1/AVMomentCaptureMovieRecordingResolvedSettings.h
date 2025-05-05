@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject
@property (nonatomic) q uniqueID;
@property (nonatomic) BOOL torchEnabled;
@property (nonatomic) NSURL movieURL;
@property (nonatomic) NSURL spatialOverCaptureURL;
@property (nonatomic) {?=ii} movieDimensions;
- (long long)uniqueID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithUniqueID:torchEnabled:movieURL:spatialOverCaptureURL:movieDimensions:;
- (BOOL)isTorchEnabled;
- (id)movieURL;
- (id)spatialOverCaptureURL;
- (id)movieDimensions;
+ (id)movieRecordingResolvedSettingsWithUniqueID:torchEnabled:movieURL:spatialOverCaptureURL:movieDimensions:;
@end
