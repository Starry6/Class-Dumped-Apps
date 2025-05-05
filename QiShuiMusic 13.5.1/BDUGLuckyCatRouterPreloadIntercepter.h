@interface BDUGLuckyCatRouterPreloadIntercepter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__sourceURLWithOriginURLComp:;
- (BOOL)canHandleUrl:;
- (id)handleUrl:;
- (BOOL)isMustBeAwakened;
+ (long long)intercepterType;
+ (id)sharedInstance;
@end
