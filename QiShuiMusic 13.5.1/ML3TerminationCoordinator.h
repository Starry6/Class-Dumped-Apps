@interface ML3TerminationCoordinator : NSObject
@property (nonatomic) BOOL isSigned;
- (void)execute;
- (id)init;
- (void)dealloc;
- (void)signForReason:;
- (BOOL)isSignedForReason:;
- (void)_performTermination;
- (BOOL)isSigned;
- (void).cxx_destruct;
- (void)secedeForReason:;
+ (id)sharedCoordinator;
@end
