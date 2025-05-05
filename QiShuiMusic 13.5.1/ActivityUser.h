@interface ActivityUser : IESLivePBBaseMessage
@property (nonatomic) NSString activityName;
@property (nonatomic) HTSLiveText displayTabText;
@property (nonatomic) BOOL hasDisplayTabText;
@property (nonatomic) q userId;
@property (nonatomic) NSString userIdStr;
@property (nonatomic) NSMutableArray labelsArray;
@property (nonatomic) Q labelsArray_Count;
@property (nonatomic) NSString subTabText;
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSString message;
@property (nonatomic) HTSLiveImage buttonImage;
@property (nonatomic) BOOL hasButtonImage;
@property (nonatomic) NSMutableArray backGroundImagesArray;
@property (nonatomic) Q backGroundImagesArray_Count;
+ (id)descriptor;
@end
