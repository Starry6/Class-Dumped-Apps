@interface IESLiveVSGiftPanelCommonReactionCenter : NSObject
@property (nonatomic) NSHashTable reactions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeCurrentTabWithIndex:;
- (void)currentDiamondDidUpdate:;
- (void)currentSelectedItemChanged:;
- (void)currentSelectedPageChanged:;
- (void)guestInfoDidUpdate:;
- (void)scrollToGiftPageWithIndex:;
- (void)addDelegate:;
- (id)init;
- (void).cxx_destruct;
- (id)reactions;
- (void)setReactions:;
@end
