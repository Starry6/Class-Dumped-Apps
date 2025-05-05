@interface IESLiveMultiAnchorExtra : IESLivePBBaseMessage
@property (nonatomic) NSInteger inviteRole;
@property (nonatomic) q matchType;
@property (nonatomic) GPBInt64ObjectDictionary roleLinkmicMap;
@property (nonatomic) Q roleLinkmicMap_Count;
+ (id)descriptor;
@end
