@interface CNCustomCardAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) CNContactTargetActionWrapper targetActionWrapper;
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) q placement;
@property (nonatomic) BOOL destructive;
@property (nonatomic) @? menuProvider;
- (long long)placement;
- (BOOL)isDestructive;
- (id)contactIdentifier;
- (id)title;
- (void).cxx_destruct;
- (id)menuProvider;
- (id)initWithTitle:targetActionWrapper:contactIdentifier:placement:isDestructive:menuProvider:;
- (BOOL)isValidForContact:;
- (BOOL)matchesTarget:selector:group:inContactContentViewController:;
- (id)targetActionWrapper;
+ (long long)placementForGroup:inContactContentViewController:;
+ (id)groupForActionGivenPlacement:inContactContentViewController:;
@end
