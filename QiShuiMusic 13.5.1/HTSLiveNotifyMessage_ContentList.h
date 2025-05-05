@interface HTSLiveNotifyMessage_ContentList : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray contentsArray;
@property (nonatomic) Q contentsArray_Count;
@property (nonatomic) NSString highLightColor;
+ (id)descriptor;
@end
