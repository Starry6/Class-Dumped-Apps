@interface IESLiveWalletCenter : NSObject
@property (nonatomic) NSMutableDictionary trackDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openWalletControllerWithParams:;
- (BOOL)isLightMode;
- (void)setTrackDict:;
- (id)trackDict;
- (void)transitionToFansClubLightUpController;
- (void)transitionToMyChangeControllerWithTrackInfo:;
- (void)transitionToWalletCoinControllerWithTrackInfo:;
- (void)transitionToWalletControllerFromAppStore;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
