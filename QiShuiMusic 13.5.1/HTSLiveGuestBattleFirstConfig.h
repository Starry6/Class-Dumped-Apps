@interface HTSLiveGuestBattleFirstConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray gradeConfigsArray;
@property (nonatomic) Q gradeConfigsArray_Count;
+ (id)descriptor;
@end
