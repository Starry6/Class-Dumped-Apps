@interface MCProcessAssertion : NSObject
@property (nonatomic) NSString reason;
- (void)_releaseAssertion;
- (void)dealloc;
- (id)initWithReason:;
- (id)reason;
- (void)_createAssertion;
- (void).cxx_destruct;
@end
