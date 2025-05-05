@interface IESLiveSaaSPBCityEffect : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage effectResource;
@property (nonatomic) BOOL hasEffectResource;
@property (nonatomic) NSString city;
@property (nonatomic) GPBInt64Array showEffectUserIdListArray;
@property (nonatomic) Q showEffectUserIdListArray_Count;
+ (id)descriptor;
@end
