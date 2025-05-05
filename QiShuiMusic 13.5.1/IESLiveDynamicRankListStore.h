@interface IESLiveDynamicRankListStore : NSObject
@property (nonatomic) Q lastWarningLevel;
- (unsigned long long)lastWarningLevel;
- (void)setLastWarningLevel:;
+ (id)sharedInstance;
@end
