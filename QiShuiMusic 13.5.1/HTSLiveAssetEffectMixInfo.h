@interface HTSLiveAssetEffectMixInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray effectMixImageInfosArray;
@property (nonatomic) Q effectMixImageInfosArray_Count;
+ (id)descriptor;
@end
