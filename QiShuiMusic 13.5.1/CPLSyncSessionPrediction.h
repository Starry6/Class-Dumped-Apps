@interface CPLSyncSessionPrediction : NSObject
- (id)init;
- (id)predictedValueForType:;
- (void)updateXPCActivityCriteria:;
- (id)updatedPredictionWithValuesAndTypes:;
- (BOOL)matchesXPCActivity:;
- (BOOL)matchesXPCActivityCriteria:;
- (id)redactedDescription;
- (void)updateXPCActivity:;
- (id)initWithPredictedValuesAndTypes:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_oldPredictionWithKey:inCriteria:matchesPredictionWithKey:;
@end
