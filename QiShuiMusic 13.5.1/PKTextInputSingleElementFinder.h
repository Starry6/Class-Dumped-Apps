@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder
@property (nonatomic) PKTextInputElement foundElement;
@property (nonatomic) NSSet candidateElements;
@property (nonatomic) BOOL finished;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)findSingleElementCloseToPosition:coordinateSpace:completion:;
- (void)findSingleElementAtPosition:coordinateSpace:completion:;
- (void)_finishSingleElementSearchIfReadyAtPosition:coordinateSpace:candidates:completion:;
- (id)foundElement;
- (id)candidateElements;
@end
