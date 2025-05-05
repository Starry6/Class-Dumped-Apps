@interface HTSLiveEpisodePaidInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidType;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveVideoInfo videoInfo;
@property (nonatomic) BOOL hasVideoInfo;
@property (nonatomic) HTSLiveOrderData orderData;
@property (nonatomic) BOOL hasOrderData;
@property (nonatomic) q feedDuration;
@property (nonatomic) BOOL isDelivery;
@property (nonatomic) NSMutableArray goodsInfosV2Array;
@property (nonatomic) Q goodsInfosV2Array_Count;
@property (nonatomic) NSMutableArray freeViewRangesArray;
@property (nonatomic) Q freeViewRangesArray_Count;
+ (id)descriptor;
@end
