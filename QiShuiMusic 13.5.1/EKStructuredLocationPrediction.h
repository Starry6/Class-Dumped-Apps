@interface EKStructuredLocationPrediction : NSObject
+ (id)locationPredictionForEvent:error:timeout:;
+ (BOOL)shouldDoLocationPredictionForEvent:;
+ (void)userInteractionWithPredictedLocationOfInterest:interaction:;
+ (id)_mockLocationForEvent:;
@end
