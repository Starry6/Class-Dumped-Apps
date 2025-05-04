@interface AWESiriAutoDonateModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (BOOL)enableSiriAutoDonateBecomeOrResignActive;
- (void)p_donateUserActivity:;
@end
