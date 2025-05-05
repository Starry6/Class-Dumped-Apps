@interface HTSLiveSeriesGiftsInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray seriesGiftListArray;
@property (nonatomic) Q seriesGiftListArray_Count;
@property (nonatomic) BOOL allowFullSend;
+ (id)descriptor;
@end
