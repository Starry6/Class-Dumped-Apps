@interface PLHighlightItemPromoter : NSObject
@property (nonatomic) <PLHighlightItemPromoterRule> rule;
- (id)rule;
- (void)processHighlightItemsInHighlightItemList:currentlyPromotedHighlightItems:withSharingConsideration:resultBlock:;
- (void).cxx_destruct;
- (id)initWithRule:;
@end
