@interface CRTextRecognizerResults : NSObject
@property (nonatomic) NSDictionary inputOptions;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) NSArray textFeatures;
@property (nonatomic) NSArray codeMaps;
@property (nonatomic) CRLatticeResults latticeResults;
@property (nonatomic) NSArray lineFeatures;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (id)inputOptions;
- (void)setInputOptions:;
- (id)textFeatures;
- (void)setTextFeatures:;
- (id)lineFeatures;
- (id)codeMaps;
- (void)setCodeMaps:;
- (id)latticeResults;
- (void)setLatticeResults:;
@end
