@interface AWEMiniLunaSubscribeDowngradeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDowngrade;
- (void)updateDowngradeStatusIfNeeded;
- (void)setUp;
+ (id)shared;
@end
