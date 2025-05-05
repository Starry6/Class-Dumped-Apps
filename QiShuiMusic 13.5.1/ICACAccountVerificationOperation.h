@interface ICACAccountVerificationOperation : ICUserVerificationOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)execute;
- (void)finishWithError:;
- (void)authenticateTask:handleDialogRequest:completion:;
@end
