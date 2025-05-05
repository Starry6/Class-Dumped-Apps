@interface FirstChargeResponse_FirstChargePackageItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString elideDesc;
+ (id)descriptor;
@end
