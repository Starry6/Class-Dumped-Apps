@interface FPBlockRecoveryAttempter : NSObject
@property (nonatomic) NSError expectedError;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:optionIndex:;
- (id)initWithBlock:operationService:;
- (id)expectedError;
- (void)setExpectedError:;
@end
