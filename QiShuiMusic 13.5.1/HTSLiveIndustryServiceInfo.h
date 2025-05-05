@interface HTSLiveIndustryServiceInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL entranceOpen;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) HTSLiveIndustryServiceInfo_ConsultInfo consultInfo;
@property (nonatomic) BOOL hasConsultInfo;
+ (id)descriptor;
@end
