@interface IESLiveInnerPbImage : GPBMessage
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSString uri;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSString avgColor;
@property (nonatomic) NSInteger imageType;
@property (nonatomic) NSString openWebURL;
@property (nonatomic) IESLiveInnerPbImage_Content content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isAnimated;
+ (id)descriptor;
@end
