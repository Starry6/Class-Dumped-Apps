@interface HTSLivePreviewExposeData_PreviewPromotion : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray avatarIconsArray;
@property (nonatomic) Q avatarIconsArray_Count;
@property (nonatomic) NSString text;
@property (nonatomic) NSMutableArray fastCommentsArray;
@property (nonatomic) Q fastCommentsArray_Count;
+ (id)descriptor;
@end
