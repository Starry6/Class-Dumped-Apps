@interface CRTextResults : NSObject
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) CRTextDetectorResults detectorResults;
@property (nonatomic) CRTextRecognizerResults recognizerResults;
@property (nonatomic) NSArray textFeatures;
@property (nonatomic) CRTextFeature titleTextFeature;
@property (nonatomic) q filteredOutFeatureCount;
@property (nonatomic) NSArray lineFeatures;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (id)textFeatures;
- (void)setTextFeatures:;
- (id)lineFeatures;
- (id)detectorResults;
- (void)setDetectorResults:;
- (id)recognizerResults;
- (void)setRecognizerResults:;
- (id)titleTextFeature;
- (void)setTitleTextFeature:;
- (long long)filteredOutFeatureCount;
- (void)setFilteredOutFeatureCount:;
+ (id)linesFromTextFeatures:;
@end
