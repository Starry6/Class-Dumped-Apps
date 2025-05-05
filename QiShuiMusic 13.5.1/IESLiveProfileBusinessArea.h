@interface IESLiveProfileBusinessArea : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray topElementListArray;
@property (nonatomic) Q topElementListArray_Count;
@property (nonatomic) NSMutableArray bottomElementListArray;
@property (nonatomic) Q bottomElementListArray_Count;
@property (nonatomic) IESLiveGiftExhibitionBanner exhibitionBanner;
@property (nonatomic) BOOL hasExhibitionBanner;
+ (id)descriptor;
@end
