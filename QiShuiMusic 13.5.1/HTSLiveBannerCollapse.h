@interface HTSLiveBannerCollapse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText collapseTitle;
@property (nonatomic) BOOL hasCollapseTitle;
@property (nonatomic) HTSLiveImage collapseImage;
@property (nonatomic) BOOL hasCollapseImage;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) q collapseHeight;
@property (nonatomic) NSString verticalLineColor;
+ (id)descriptor;
@end
