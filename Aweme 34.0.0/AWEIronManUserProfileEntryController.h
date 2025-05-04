@interface AWEIronManUserProfileEntryController : NSObject
@property (nonatomic) AWEIronManCradView cardView;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) BOOL shouldReported;
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
- (void)cradViewDidClick:;
- (void)setShouldReported:;
- (BOOL)shouldReported;
- (id)init;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)cardView;
- (void)setCardView:;
+ (void)handleProfileExtensionAreaActionWithType:userModel:schema:;
+ (id)cardControllerWithUserModel:cardModel:cardIndex:extraInfo:reloadCardListBlock:;
@end
