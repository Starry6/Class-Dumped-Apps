@interface EFPromise : NSObject
@property (nonatomic) EFFuture future;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (id)init;
- (void)cancel;
- (id)future;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
+ (id)promise;
@end
