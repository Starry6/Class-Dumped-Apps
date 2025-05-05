@interface ABUCsjInterstitialAdapter : NSObject
@property (nonatomic) <BUMCustomInterstitialAdapterBridge> bridge;
@property (nonatomic) BOOL isCustomAdapter;
@property (nonatomic) <BUMCustomConfigAdapter> configAdapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadInterstitialAdWithSlotID:andSize:parameter:;
- (id)mediatedAdStatus;
- (id)serverBiddingTokenWithParams:error:;
- (BOOL)showAdFromRootViewController:parameter:;
@end
