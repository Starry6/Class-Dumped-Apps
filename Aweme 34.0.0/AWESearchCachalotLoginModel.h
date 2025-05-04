@interface AWESearchCachalotLoginModel : NSObject
@property (nonatomic) BOOL needsLogin;
- (void)setNeedsLogin:;
- (BOOL)needsLogin;
+ (id)modelWithStatusCode:;
@end
