@interface CJPayWXChannel : CJPayBasicChannel
@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL canHandleUserActivity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getWEBayVersion;
- (void)onResp:;
- (void)appDidInForeground;
- (BOOL)canHandleUserActivity;
- (BOOL)canProcessUserActivity:;
- (BOOL)canProcessWithURL:;
- (id)channelScheme;
- (void)exeCompletionBlock:resultType:errCode:;
- (void)handleWEBayResponse:;
- (void)payActionWithDataDict:completionBlock:;
- (void)setCanHandleUserActivity:;
- (void)setWakingApp:;
- (BOOL)wakingApp;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;
+ (BOOL)isAvailableUse;
+ (void)registerPlugin;
@end
