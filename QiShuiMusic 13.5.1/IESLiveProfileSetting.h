@interface IESLiveProfileSetting : IESLivePBBaseMessage
@property (nonatomic) q showSetting;
@property (nonatomic) NSMutableArray styleTemplateArray;
@property (nonatomic) Q styleTemplateArray_Count;
+ (id)descriptor;
@end
