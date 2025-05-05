@interface IESLiveSaaSPBGuideMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q guideType;
@property (nonatomic) q giftId;
@property (nonatomic) NSString description_p;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
