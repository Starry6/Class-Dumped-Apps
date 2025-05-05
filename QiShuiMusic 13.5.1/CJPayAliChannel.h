@interface CJPayAliChannel : CJPayBasicChannel
@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL startTime;
- (void)appDidInBackground;
- (void)appDidInForeground;
- (BOOL)canProcessWithURL:;
- (id)channelScheme;
- (void)exeCompletionBlock:resultType:rawErrorCode:;
- (id)getAliPayVersion;
- (void)handleAliPayResponse:;
- (void)payActionWithDataDict:completionBlock:;
- (void)setWakingApp:;
- (BOOL)wakingApp;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;
- (void)setStartTime:;
- (BOOL)startTime;
+ (BOOL)isAvailableUse;
+ (void)registerPlugin;
@end
