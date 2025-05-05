@interface FansclubMeResult_TaskInfo_Item : IESLivePBBaseMessage
@property (nonatomic) NSInteger taskType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString description_p;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q compeletedNum;
@property (nonatomic) q totalNum;
@property (nonatomic) q intimacyBonus;
@property (nonatomic) FansclubMeResult_TaskInfo_Button button;
@property (nonatomic) BOOL hasButton;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
+ (id)descriptor;
@end
