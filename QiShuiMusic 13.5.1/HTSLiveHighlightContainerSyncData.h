@interface HTSLiveHighlightContainerSyncData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray highlightItemsArray;
@property (nonatomic) Q highlightItemsArray_Count;
@property (nonatomic) q syncVersion;
@property (nonatomic) HTSLiveCarouselInfo carouselInfo;
@property (nonatomic) BOOL hasCarouselInfo;
+ (id)descriptor;
@end
