@interface HTSLiveImage : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSString avgColor;
@property (nonatomic) NSInteger imageType;
@property (nonatomic) NSString openWebURL;
@property (nonatomic) HTSLiveImage_Content content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) NSMutableArray flexSettingListArray;
@property (nonatomic) Q flexSettingListArray_Count;
@property (nonatomic) NSMutableArray textSettingListArray;
@property (nonatomic) Q textSettingListArray_Count;
+ (id)descriptor;
@end
