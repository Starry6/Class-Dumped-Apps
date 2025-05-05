@interface HTSLiveCommentSpecialEffectData : IESLivePBBaseMessage
@property (nonatomic) NSInteger commentSpecialEffectType;
@property (nonatomic) NSMutableArray effectsDataUrlsArray;
@property (nonatomic) Q effectsDataUrlsArray_Count;
@property (nonatomic) NSMutableArray maskedOffsetListArray;
@property (nonatomic) Q maskedOffsetListArray_Count;
@property (nonatomic) q specialEffectInterval;
@property (nonatomic) NSString effectTypeSdkKey;
@property (nonatomic) q maxCommentCountPerEffect;
+ (id)descriptor;
@end
