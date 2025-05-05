@interface WebPolicyDecisionListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)download;
- (void)dealloc;
- (void)_invalidate;
- (void)ignore;
- (void)use;
- (id)_initWithTarget:action:;
- (void)_usePolicy:;
@end
