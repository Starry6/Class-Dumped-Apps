@interface AWEConcernFansToolProfileEntryController : NSObject
@property (nonatomic) AWEConcernFansToolProfileEntryCard cardView;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) Q cardIndex;
@property (nonatomic) @? reloadCardListBlock;
@property (nonatomic) BOOL isMyEntry;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setIsFirstShow:;
- (BOOL)isFirstShow;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (void)setCardModel:;
- (double)widthOfCard;
- (void)setReloadCardListBlock:;
- (id)reloadCardListBlock;
- (void)setCardIndex:;
- (void)__cardClick;
- (unsigned long long)cardIndex;
- (BOOL)isMyEntry;
- (void)setIsMyEntry:;
- (id)init;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)cardView;
- (void)setCardView:;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:;
+ (id)cardControllerWithUserModel:cardModel:cardIndex:extraInfo:reloadCardListBlock:;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:cardModel:cardIndex:extraInfoDict:;
@end
