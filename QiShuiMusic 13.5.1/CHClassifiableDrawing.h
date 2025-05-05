@interface CHClassifiableDrawing : NSObject
@property (nonatomic) CHDrawing drawing;
@property (nonatomic) NSCharacterSet characterSet;
@property (nonatomic) BOOL expandCodePoints;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizationContext;
@property (nonatomic) Q maxCandidateCount;
- (id)characterSet;
- (void).cxx_destruct;
- (id)drawing;
- (id)initWithDrawing:characterSet:expandCodePoints:normalizationContext:maxCandidateCount:;
- (BOOL)expandCodePoints;
- (id)normalizationContext;
- (unsigned long long)maxCandidateCount;
@end
