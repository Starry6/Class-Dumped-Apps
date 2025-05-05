@interface HTSLiveCityEffect : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage effectResource;
@property (nonatomic) BOOL hasEffectResource;
@property (nonatomic) NSString city;
@property (nonatomic) GPBInt64Array showEffectUserIdListArray;
@property (nonatomic) Q showEffectUserIdListArray_Count;
@property (nonatomic) NSMutableArray showEffectOpenIdListArray;
@property (nonatomic) Q showEffectOpenIdListArray_Count;
+ (id)descriptor;
@end
