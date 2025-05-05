@interface IESLiveUserCardShopDynamicView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) DSLDetail dsl;
@property (nonatomic) UIView shopView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dsl;
- (void)setDsl:;
- (void)setShopView:;
- (id)shopView;
- (void)triggerSliceXEvent:;
- (void)setStore:;
- (id)initWithStore:;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
@end
