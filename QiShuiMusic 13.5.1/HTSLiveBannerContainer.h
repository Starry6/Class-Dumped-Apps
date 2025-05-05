@interface HTSLiveBannerContainer : IESLivePBBaseMessage
@property (nonatomic) NSString containerURL;
@property (nonatomic) NSMutableArray bannerListArray;
@property (nonatomic) Q bannerListArray_Count;
@property (nonatomic) HTSLiveImage animationImage;
@property (nonatomic) BOOL hasAnimationImage;
@property (nonatomic) HTSLiveBannerCollapse collapse;
@property (nonatomic) BOOL hasCollapse;
@property (nonatomic) q containerHeight;
@property (nonatomic) q containerWidth;
@property (nonatomic) NSString lynxContainerURL;
@property (nonatomic) q containerType;
@property (nonatomic) NSMutableArray tokenListArray;
@property (nonatomic) Q tokenListArray_Count;
- (id)mapToListModel;
+ (id)descriptor;
@end
