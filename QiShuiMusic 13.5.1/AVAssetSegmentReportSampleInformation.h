@interface AVAssetSegmentReportSampleInformation : NSObject
@property (nonatomic) {?=qiIq} presentationTimeStamp;
@property (nonatomic) q offset;
@property (nonatomic) q length;
@property (nonatomic) BOOL isSyncSample;
- (void)dealloc;
- (long long)offset;
- (id)presentationTimeStamp;
- (long long)length;
- (id)initWithFigSegmentReportSampleInformationDictionary:;
- (BOOL)isSyncSample;
@end
