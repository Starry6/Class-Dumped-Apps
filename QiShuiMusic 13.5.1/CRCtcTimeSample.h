@interface CRCtcTimeSample : NSObject
@property (nonatomic) ^v sample;
@property (nonatomic) {CRCtcCandidate=if} blank;
- (id)sample;
- (id)init;
- (void)dealloc;
- (id)candidates;
- (void)addCandidate:;
- (void)setSample:;
- (void)trimCandidates;
- (id)topCandidate;
- (id)blank;
- (void)setBlank:;
@end
