@interface BreakthroughInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mixMvpAnchorId;
@property (nonatomic) q stage;
@property (nonatomic) q totalScore;
@property (nonatomic) NSString mvpAnchorId;
@property (nonatomic) NSInteger state;
@property (nonatomic) GPBInt64ObjectDictionary stageInfoMap;
@property (nonatomic) Q stageInfoMap_Count;
- (id)mixMvpAnchorId;
+ (id)descriptor;
@end
