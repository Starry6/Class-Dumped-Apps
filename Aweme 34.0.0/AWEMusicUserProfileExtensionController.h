@interface AWEMusicUserProfileExtensionController : NSObject
@property (nonatomic) AWEMusicUserProfileEntryCardView entryCardView;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) @? reloadCardListBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setCardModel:;
- (double)widthOfCard;
- (void)setReloadCardListBlock:;
- (id)reloadCardListBlock;
- (id)entryCardView;
- (void)cardClick:;
- (id)subtitileWithCardModel:;
- (void)setEntryCardView:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (BOOL)isCurrentUser;
- (id)cardView;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:;
+ (id)cardControllerWithUserModel:cardModel:cardIndex:extraInfo:reloadCardListBlock:;
@end
