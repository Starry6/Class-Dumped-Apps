@interface AWEPlayInteractionSnackBarManager : NSObject
@property (nonatomic) NSArray interceptList;
- (BOOL)isInterceptWithIdentifier:;
- (void)setInterceptList:;
- (id)interceptList;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
