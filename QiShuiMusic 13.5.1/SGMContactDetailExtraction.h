@interface SGMContactDetailExtraction : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:source:signature:detail:outcome:foundInSenderCNContact:extractionModelVersion:isUnlikelyPhone:signatureExtractionSource:;
@end
