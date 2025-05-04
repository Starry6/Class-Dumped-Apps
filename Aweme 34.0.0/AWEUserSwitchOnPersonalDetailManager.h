@interface AWEUserSwitchOnPersonalDetailManager : NSObject
@property (nonatomic) BOOL isInSwitchProduce;
@property (nonatomic) NSMutableDictionary contexts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showQuickSwitchOnPersonalDetailWithEnterFrom:switchUserComplete:finishComplete:;
- (void)userDetailVCWillBackWithVCHash:;
- (void)dismissSwitchAccount;
- (void)setIsInSwitchProduce:;
- (id)vcHashString:;
- (BOOL)isInSwitchProduce;
- (id)findUserDetailViewController:;
- (void)updateInSwitchProduce:;
- (void).cxx_destruct;
- (id)contexts;
- (void)setContexts:;
+ (id)sharedManager;
@end
