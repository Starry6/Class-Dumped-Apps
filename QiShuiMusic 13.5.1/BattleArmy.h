@interface BattleArmy : IESLivePBBaseMessage
@property (nonatomic) NSString mixAnchorIdStr;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) NSString anchorUnionId;
@property (nonatomic) NSMutableArray rankListArray;
@property (nonatomic) Q rankListArray_Count;
@property (nonatomic) NSString anchorIdStr;
- (id)mixAnchorIdStr;
- (void)setMixAnchorIdStr:;
+ (id)descriptor;
@end
