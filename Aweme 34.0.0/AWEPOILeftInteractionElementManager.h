@interface AWEPOILeftInteractionElementManager : NSObject
@property (nonatomic) q todayCollectShowedCount;
@property (nonatomic) q totalCollectShowedCount;
@property (nonatomic) NSDate noMoreShowStartDate;
@property (nonatomic) NSString showedItemList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)todayCountOfShowPOICollectElement;
- (BOOL)hasContainInNoMoreShowPOICollectElementWithMaxDay:;
- (BOOL)hasContainInTodayShowedListWithItemId:;
- (void)clearTotalCountOfShowPOICollectElement;
- (void)increaseCountOfShowPOICollectElementWithItemId:;
- (long long)totalCountOfShowPOICollectElement;
- (void)saveCurrentDateNoMoreShowCollectElement;
- (BOOL)needFeedPOIAnchorLargeFontAdaptation;
- (id)feedPOIAnchorAdaptiveIconSizeWithSize:;
- (id)feedPOIAnchorAdaptiveFontWithFontSize:weight:;
- (void)setTotalCollectShowedCount:;
- (void)setTodayCollectShowedCount:;
- (void)setNoMoreShowStartDate:;
- (void)setShowedItemList:;
- (long long)todayCollectShowedCount;
- (id)p_hasShowPOICollectElementCountKey;
- (long long)totalCollectShowedCount;
- (id)showedItemList;
- (id)noMoreShowStartDate;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
