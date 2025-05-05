@interface AssetsEffectResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray assetsArray;
@property (nonatomic) Q assetsArray_Count;
@property (nonatomic) GPBInt64Array deleteAssetsArray;
@property (nonatomic) Q deleteAssetsArray_Count;
@property (nonatomic) BOOL enableEffectListV2;
@property (nonatomic) GPBInt64Array zipSweepMarkAssetsArray;
@property (nonatomic) Q zipSweepMarkAssetsArray_Count;
@property (nonatomic) NSMutableDictionary assetPools;
@property (nonatomic) Q assetPools_Count;
+ (id)descriptor;
@end
