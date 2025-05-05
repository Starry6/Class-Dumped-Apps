@interface HTSLiveParentProductSimpleData : IESLivePBBaseMessage
@property (nonatomic) NSString productId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) NSInteger status;
@property (nonatomic) q viewRight;
@property (nonatomic) NSInteger bindSubProductCount;
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
@property (nonatomic) NSString subTitleTag;
@property (nonatomic) NSInteger currentShowNum;
+ (id)descriptor;
@end
