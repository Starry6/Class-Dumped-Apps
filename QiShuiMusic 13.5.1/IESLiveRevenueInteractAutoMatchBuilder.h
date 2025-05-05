@interface IESLiveRevenueInteractAutoMatchBuilder : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) <IESLiveRevenueInteractProvider> provider;
@property (nonatomic) <IESLiveRevenueInteractAutoMatchBuilderDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleBattleMatchInviteMessage:;
- (void)handleBattleMatchCancelMessage:;
- (id)initWithContext:scene:provider:;
- (void)bindAction;
- (void)setProvider:;
- (void)setScene:;
- (void)setDelegate:;
- (unsigned long long)scene;
- (id)provider;
- (id)delegate;
- (void).cxx_destruct;
@end
