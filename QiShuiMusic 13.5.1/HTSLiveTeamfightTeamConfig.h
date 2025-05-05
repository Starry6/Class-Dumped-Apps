@interface HTSLiveTeamfightTeamConfig : IESLivePBBaseMessage
@property (nonatomic) q maxMember;
@property (nonatomic) NSMutableArray guestListArray;
@property (nonatomic) Q guestListArray_Count;
+ (id)descriptor;
@end
