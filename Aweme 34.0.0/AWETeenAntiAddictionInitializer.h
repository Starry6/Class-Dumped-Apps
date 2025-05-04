@interface AWETeenAntiAddictionInitializer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (void)startTeenAntiAddictionMangerIfNeeded;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
