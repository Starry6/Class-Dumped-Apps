@interface PSURLControllerHandler : NSObject
@property (nonatomic) NSObject<PSURLControllerHandlerDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void)handleURL:withCompletion:;
- (void).cxx_destruct;
@end
