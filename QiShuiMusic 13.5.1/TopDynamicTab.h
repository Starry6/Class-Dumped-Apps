@interface TopDynamicTab : IESLivePBBaseMessage
@property (nonatomic) NSString activityName;
@property (nonatomic) NSMutableArray displayTabImagesArray;
@property (nonatomic) Q displayTabImagesArray_Count;
+ (id)descriptor;
@end
