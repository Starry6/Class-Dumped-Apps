@interface HTSLiveEnlargeGuestInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray enlargedMixUserIdsArray;
@property (nonatomic) NSInteger guestType;
@property (nonatomic) NSMutableArray enlargedOpenIdsArray;
@property (nonatomic) Q enlargedOpenIdsArray_Count;
@property (nonatomic) q sourceUiLayoutMaxMembers;
@property (nonatomic) q maxMembersExceptEnlarge;
- (id)enlargedMixUserIdsArray;
- (void)setEnlargedMixUserIdsArray:;
+ (id)descriptor;
@end
