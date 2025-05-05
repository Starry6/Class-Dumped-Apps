@interface CMWalkingSteadinessClassificationManager : NSObject
+ (BOOL)isWalkingSteadinessAvailable;
+ (BOOL)classificationForScore:classification:;
+ (double)minimumScoreForClassification:;
+ (double)maximumScoreForClassification:;
+ (id)classificationDataFromStruct:;
+ (int)mapClassificationTypeFromFrameworkToClassifier:;
@end
