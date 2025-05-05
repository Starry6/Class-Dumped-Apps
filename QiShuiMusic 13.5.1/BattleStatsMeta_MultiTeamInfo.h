@interface BattleStatsMeta_MultiTeamInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray mixMultiAnchorListArray;
@property (nonatomic) NSMutableArray openMultiAnchorListArray;
@property (nonatomic) Q openMultiAnchorListArray_Count;
- (id)mixMultiAnchorListArray;
+ (id)descriptor;
@end
