@interface IESLiveLinkerBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) GPBInt64Array playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) q maxMemberCount;
+ (id)descriptor;
@end
