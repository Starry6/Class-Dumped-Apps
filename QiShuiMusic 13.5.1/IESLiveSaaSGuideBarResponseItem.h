@interface IESLiveSaaSGuideBarResponseItem : GPBMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString mainText;
@property (nonatomic) NSString subText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString toastText;
@property (nonatomic) q showSecond;
@property (nonatomic) NSInteger showLimit;
@property (nonatomic) IESLiveSaaSGuideBarThresholdConfig thresholdConfig;
@property (nonatomic) BOOL hasThresholdConfig;
@property (nonatomic) GPBInt32ObjectDictionary mainTextMap;
@property (nonatomic) Q mainTextMap_Count;
+ (id)descriptor;
@end
