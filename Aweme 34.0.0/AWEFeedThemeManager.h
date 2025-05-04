@interface AWEFeedThemeManager : NSObject
@property (nonatomic) NSPointerArray delegateArray;
@property (nonatomic) q currentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegateArray;
- (void)setDelegateArray:;
- (void)setCurrentType:;
- (void)changeTheme:;
- (void)registerDelegate:;
- (void).cxx_destruct;
- (long long)currentType;
+ (id)sharedManager;
@end
