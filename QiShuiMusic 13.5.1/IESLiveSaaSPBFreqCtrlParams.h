@interface IESLiveSaaSPBFreqCtrlParams : GPBMessage
@property (nonatomic) q dayLimit;
@property (nonatomic) q lifeLimit;
@property (nonatomic) NSString limitKey;
+ (id)descriptor;
@end
