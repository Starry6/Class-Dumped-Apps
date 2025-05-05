@interface CPLSyncSessionPredictor : NSObject
@property (nonatomic) CPLSyncSessionPrediction currentPrediction;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)updatePredictionWithValuesAndTypes:;
- (id)currentPrediction;
- (void).cxx_destruct;
- (id)description;
@end
