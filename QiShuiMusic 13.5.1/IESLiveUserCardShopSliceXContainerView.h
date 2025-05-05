@interface IESLiveUserCardShopSliceXContainerView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) IESLiveDslTemplate dsl;
@property (nonatomic) <IESLiveSliceXInstanceInterface> sliceXInstance;
- (id)dsl;
- (void)setDsl:;
- (void)doTap;
- (void)setSliceXInstance:;
- (id)sliceXInstance;
- (void)setStore:;
- (id)initWithStore:;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
@end
