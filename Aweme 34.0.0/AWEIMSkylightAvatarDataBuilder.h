@interface AWEIMSkylightAvatarDataBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)filterExcludeUidsSet:fromDict:;
- (id)buildViewModelsWithContext:;
+ (id)rebuildViewModelsWithExcludedList:pageIdentifier:;
+ (id)constructUserViewModelWithData:pageIdentifier:;
+ (void)p_addFriendAndFollowedUsersIfNeededWithList:excludeUidsSet:pageIdentifier:;
+ (void)class_filterExcludeUidsSet:fromDict:;
+ (id)onlineFriendsArrayWithServerDict:maxCount:;
@end
