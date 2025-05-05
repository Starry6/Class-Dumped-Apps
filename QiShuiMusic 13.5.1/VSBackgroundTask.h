@interface VSBackgroundTask : NSObject
@property (nonatomic) RBSAssertion assertion;
@property (nonatomic) NSString name;
@property (nonatomic) <VSBackgroundTaskDelegate> delegate;
- (id)assertion;
- (void)setAssertion:;
- (void)end;
- (id)init;
- (void)setName:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)name;
- (BOOL)begin;
@end
