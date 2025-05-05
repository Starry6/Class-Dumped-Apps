@interface CJPayDyChannel : CJPayBasicChannel
@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL startTime;
- (id)getDyPayVersion;
- (void)appDidInBackground;
- (void)appDidInForeground;
- (BOOL)canProcessWithURL:;
- (id)channelScheme;
- (void)exeCompletionBlock:resultType:rawErrorCode:;
- (void)handleDyPayResponse:;
- (void)payActionWithDataDict:completionBlock:;
- (void)setWakingApp:;
- (BOOL)wakingApp;
- (id)init;
- (void)dealloc;
- (void)setStartTime:;
- (BOOL)startTime;
+ (BOOL)isAvailableUse;
+ (void)registerPlugin;
@end
