@interface AVAssetSegmentReport : NSObject
@property (nonatomic) q segmentType;
@property (nonatomic) NSArray trackReports;
- (void)dealloc;
- (id)initWithFigSegmentReportDictionary:;
- (long long)segmentType;
- (id)trackReports;
@end
