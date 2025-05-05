@interface IESLiveInnerPbBannerContainer : GPBMessage
@property (nonatomic) NSString containerURL;
@property (nonatomic) NSMutableArray bannerListArray;
@property (nonatomic) Q bannerListArray_Count;
@property (nonatomic) IESLiveInnerPbImage animationImage;
@property (nonatomic) BOOL hasAnimationImage;
@property (nonatomic) IESLiveInnerPbBannerCollapse collapse;
@property (nonatomic) BOOL hasCollapse;
@property (nonatomic) q containerHeight;
@property (nonatomic) q containerWidth;
@property (nonatomic) NSString lynxContainerURL;
@property (nonatomic) q containerType;
- (id)mapToListModel;
+ (id)descriptor;
@end
