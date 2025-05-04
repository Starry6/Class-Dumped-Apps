@interface AWEAspectSettings : NSObject
@property (nonatomic) AWEAspectBlockList blocklist;
- (BOOL)isAllowedHookMethod:inClass:inModule:;
- (void)setBlocklist:;
- (id)blocklist;
- (void).cxx_destruct;
+ (id)sharedSettings;
@end
