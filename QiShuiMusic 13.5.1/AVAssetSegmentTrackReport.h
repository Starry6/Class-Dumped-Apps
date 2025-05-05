@interface AVAssetSegmentTrackReport : NSObject
@property (nonatomic) NSInteger trackID;
@property (nonatomic) NSString mediaType;
@property (nonatomic) {?=qiIq} earliestPresentationTimeStamp;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) AVAssetSegmentReportSampleInformation firstVideoSampleInformation;
- (id)mediaType;
- (void)dealloc;
- (int)trackID;
- (id)duration;
- (id)initWithFigSegmentTrackReportDictionary:;
- (id)earliestPresentationTimeStamp;
- (id)firstVideoSampleInformation;
@end
