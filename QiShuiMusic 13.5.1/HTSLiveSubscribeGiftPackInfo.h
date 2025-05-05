@interface HTSLiveSubscribeGiftPackInfo : IESLivePBBaseMessage
@property (nonatomic) q relatedGiftId;
@property (nonatomic) q offlineTimeSecond;
@property (nonatomic) NSInteger leftScores;
@property (nonatomic) NSString entranceSchemeURL;
@property (nonatomic) NSString entranceSchemeURLQueryParams;
+ (id)descriptor;
@end
