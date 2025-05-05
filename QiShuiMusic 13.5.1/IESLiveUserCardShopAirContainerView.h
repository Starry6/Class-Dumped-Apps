@interface IESLiveUserCardShopAirContainerView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) IESLiveDslTemplate dsl;
@property (nonatomic) <IESLiveLynxAirInstanceInterface> airInstance;
@property (nonatomic) double start;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (id)dsl;
- (void)setAirInstance:;
- (void)setDsl:;
- (id)airInstance;
- (void)containerDidFirstScreen:;
- (void)doTap;
- (id)initWithStore:startTime:;
- (void)setStart:;
- (void)setStore:;
- (double)start;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
- (id)businessIdentifier;
@end
