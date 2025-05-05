@interface HTSLiveIconAutoplayAssetInfo : IESLivePBBaseMessage
@property (nonatomic) NSString frequencyKey;
@property (nonatomic) HTSLiveImage assetImg;
@property (nonatomic) BOOL hasAssetImg;
@property (nonatomic) NSInteger interval;
@property (nonatomic) q showCount;
+ (id)descriptor;
@end
