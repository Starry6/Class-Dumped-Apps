@interface CMVO2MaxClassification : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)classificationDataFromStruct:;
- (void)queryAllClassificationsWithHandler:;
- (void)queryClassificationForBiologicalSex:age:handler:;
- (void)queryClassificationForBiologicalSex:age:vo2Max:handler:;
+ (long long)biologicalSexFromCLHKBiologicalSex:;
+ (int)CLHKBiologicalSexFromBiologicalSex:;
@end
