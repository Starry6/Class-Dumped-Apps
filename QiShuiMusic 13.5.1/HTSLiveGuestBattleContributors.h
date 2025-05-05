@interface HTSLiveGuestBattleContributors : IESLivePBBaseMessage
@property (nonatomic) NSArray mixUserIdsArray;
@property (nonatomic) NSMutableArray openIdsArray;
@property (nonatomic) Q openIdsArray_Count;
- (id)mixUserIdsArray;
+ (id)descriptor;
@end
