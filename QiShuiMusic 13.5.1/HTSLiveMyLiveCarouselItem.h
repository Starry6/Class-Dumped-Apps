@interface HTSLiveMyLiveCarouselItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSMutableArray carouselItemsArray;
@property (nonatomic) Q carouselItemsArray_Count;
@property (nonatomic) NSString backupScene;
@property (nonatomic) HTSLiveLynxContainer lynxContainer;
@property (nonatomic) BOOL hasLynxContainer;
@property (nonatomic) NSInteger carouselInterval;
+ (id)descriptor;
@end
