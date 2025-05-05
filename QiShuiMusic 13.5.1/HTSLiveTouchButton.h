@interface HTSLiveTouchButton : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray textArray;
@property (nonatomic) Q textArray_Count;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) q buttonType;
+ (id)descriptor;
@end
