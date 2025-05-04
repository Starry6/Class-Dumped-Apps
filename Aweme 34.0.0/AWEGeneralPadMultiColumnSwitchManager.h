@interface AWEGeneralPadMultiColumnSwitchManager : NSObject
@property (nonatomic) q layoutColumnNum;
- (long long)layoutColumnNum;
- (void)setLayoutColumnNum:;
+ (long long)padSearchColumnSwitchTypeAB;
+ (BOOL)shouldShowPadSingleColumn;
+ (id)sharedInstance;
+ (BOOL)isPad;
@end
