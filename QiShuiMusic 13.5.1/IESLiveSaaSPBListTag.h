@interface IESLiveSaaSPBListTag : GPBMessage
@property (nonatomic) NSInteger listTagType;
@property (nonatomic) NSInteger tagOneOfCase;
@property (nonatomic) IESLiveSaaSPBListTagHonorLevelContent honorLevelTag;
@property (nonatomic) IESLiveSaaSPBListTagFriendContent friendTag;
@property (nonatomic) IESLiveSaaSPBListTagFansContent fansTag;
+ (id)descriptor;
@end
