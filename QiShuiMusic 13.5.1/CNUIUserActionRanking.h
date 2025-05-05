@interface CNUIUserActionRanking : NSObject
@property (nonatomic) <CNUIInteractionAdvisor> interactionAdvisor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)interactionAdvisor;
- (id)initWithInteractionAdvisor:;
- (id)sortActionItems:schedulerProvider:;
- (id)selectRecentActionItems:schedulerProvider:;
- (id)sortKeysByRankingAddresses:actionType:scheduler:;
- (id)selectMostRecentActionFromItems:;
+ (id)advisorSettingsForSortingAddresses:actionType:;
+ (id)advisorSettingsForIdentifyingMostRecentAction:actionType:;
+ (id)constrainMechanismsForActionType:;
+ (id)sortKeyWithUsername:bundleIdentifier:;
@end
