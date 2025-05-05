@interface IESLiveFormComp : IESLivePBBaseMessage
@property (nonatomic) IESLiveText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) IESLiveText subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) NSMutableArray itemListArray;
@property (nonatomic) Q itemListArray_Count;
+ (id)descriptor;
@end
