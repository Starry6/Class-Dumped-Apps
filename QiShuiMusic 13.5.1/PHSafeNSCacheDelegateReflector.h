@interface PHSafeNSCacheDelegateReflector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:forCache:;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
+ (id)sharedInstance;
+ (void)setDelegate:forCache:;
@end
