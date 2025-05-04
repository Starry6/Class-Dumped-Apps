@interface AWELoginSourceTracker : NSObject
@property (nonatomic) NSString source;
@property (nonatomic) NSString position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didCancelLogin;
- (void)didFinishLogoutWithUid:;
- (void)trackSource:position:;
- (void)didFinishLogin:platform:error:;
- (void)trackSource:position:type:;
- (id)init;
- (void)dealloc;
- (id)position;
- (void)_reset;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setPosition:;
- (void)start;
+ (id)sharedInstance;
@end
