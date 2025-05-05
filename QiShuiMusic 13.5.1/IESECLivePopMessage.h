@interface IESECLivePopMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSInteger bubbleType;
@property (nonatomic) q promotionId;
@property (nonatomic) IESECHotAtmosphere hotAtmosphere;
@property (nonatomic) BOOL hasHotAtmosphere;
@property (nonatomic) IESECDelayParam delayParam;
@property (nonatomic) BOOL hasDelayParam;
@property (nonatomic) IESECPopProductInfo productInfo;
@property (nonatomic) BOOL hasProductInfo;
+ (id)descriptor;
@end
