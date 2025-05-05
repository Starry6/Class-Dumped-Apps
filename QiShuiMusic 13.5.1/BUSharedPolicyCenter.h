@interface BUSharedPolicyCenter : NSObject
@property (nonatomic) NSMapTable policyCenterPool;
- (id)policyCenterPool;
- (void)setPolicyCenterPool:;
- (id)sharedVM:createBlock:;
- (void)setup;
- (void).cxx_destruct;
+ (id)shared;
@end
