@interface HTSLiveCarouselInfo : IESLivePBBaseMessage
@property (nonatomic) q time;
@property (nonatomic) GPBInt64Array itemGroupArray;
@property (nonatomic) Q itemGroupArray_Count;
+ (id)descriptor;
@end
