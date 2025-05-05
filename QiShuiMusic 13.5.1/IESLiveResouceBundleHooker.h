@interface IESLiveResouceBundleHooker : NSObject
@property (nonatomic) @? preHook;
@property (nonatomic) @? postHook;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preHook;
- (id)initWithPreHook:postHook:;
- (id)postHook;
- (void)setPostHook:;
- (void)setPreHook:;
- (void).cxx_destruct;
@end
