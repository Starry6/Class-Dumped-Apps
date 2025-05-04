@interface AWEWebViewUAProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableUAFetch;
- (id)fetchSystemUserAgentFromeCache;
- (void)fetchLastestSystemUserAgentWithCompletion:;
- (void)fetchSystemUserAgentWithCompletion:;
- (void)registerUAProvider;
+ (id)sharedInstance;
@end
