@interface AlgosScoreCombiner : NSObject
@property (nonatomic) NSInteger debug;
- (void)clearScores;
- (id)init;
- (void)setDebug:;
- (void)dealloc;
- (int)debug;
- (void)addScore:weight:type:label:;
- (double)signedMeanSquaredDeviation;
- (id)scoreScores:;
+ (id)combiner;
@end
