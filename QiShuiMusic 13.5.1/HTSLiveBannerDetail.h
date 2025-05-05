@interface HTSLiveBannerDetail : IESLivePBBaseMessage
@property (nonatomic) NSString role;
@property (nonatomic) NSMutableDictionary role2Views;
@property (nonatomic) Q role2Views_Count;
@property (nonatomic) NSMutableArray time2PictureArray;
@property (nonatomic) Q time2PictureArray_Count;
+ (id)descriptor;
@end
