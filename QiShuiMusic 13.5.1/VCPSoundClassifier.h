@interface VCPSoundClassifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)results;
- (void).cxx_destruct;
- (int)finalizeAnalysisAtTime:;
- (void)request:didProduceResult:;
- (id)initWithTrackStart:threshold:resultsKey:;
- (void)addDetectionFromTime:toTime:confidence:;
@end
