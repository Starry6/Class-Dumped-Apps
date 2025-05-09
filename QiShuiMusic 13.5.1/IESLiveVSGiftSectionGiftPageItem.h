@interface IESLiveVSGiftSectionGiftPageItem : IESLiveDynamicModel
@property (nonatomic) NSArray giftListItems;
@property (nonatomic) IESLiveVSGiftItem currentSelectedItem;
@property (nonatomic) IESLiveVSGiftGuestModel guestModel;
@property (nonatomic) @? giftListItemsDidUpdate;
@property (nonatomic) @? scrollGiftPageWithIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) # cellClass;
@property (nonatomic) IESLiveVSGiftPanelDataSharing dataSharing;
@property (nonatomic) IESLiveVSGiftPanelCommonReactionCenter reactionCenter;
- (void)setDataSharing:;
- (void)currentSelectedItemChanged:;
- (id)dataSharing;
- (id)diffIdentifier;
- (id)giftListItems;
- (id)giftListItemsDidUpdate;
- (void)guestInfoDidUpdate:;
- (id)guestModel;
- (id)initWithDataSharing:withReactionCenter:;
- (BOOL)isEqualToDiffableItem:;
- (id)reactionCenter;
- (id)scrollGiftPageWithIndex;
- (void)scrollToGiftPageWithIndex:;
- (void)selectGiftWithGiftID:success:;
- (void)setCurrentSelectedItem:;
- (void)setGiftListItems:;
- (void)setGiftListItemsDidUpdate:;
- (void)setGuestModel:;
- (void)setReactionCenter:;
- (void)setScrollGiftPageWithIndex:;
- (void)updateWithGiftPages:;
- (id)itemSize;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setItemSize:;
- (id)currentSelectedItem;
- (double)bottomOffset;
- (void)setCellClass:;
@end
