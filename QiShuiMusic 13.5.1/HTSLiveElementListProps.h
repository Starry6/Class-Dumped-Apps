@interface HTSLiveElementListProps : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray conditionTextArray;
@property (nonatomic) Q conditionTextArray_Count;
@property (nonatomic) HTSLiveProConfProps proConf;
@property (nonatomic) BOOL hasProConf;
@property (nonatomic) NSString levelText;
@property (nonatomic) NSString awardIcon;
+ (id)descriptor;
@end
