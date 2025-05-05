@interface IESLiveSaaSPBLinkmicInfo : GPBMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkMicId;
@property (nonatomic) BOOL joinable;
@property (nonatomic) NSInteger confluenceType;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) q vendor;
@property (nonatomic) NSString liveCoreExtInfo;
+ (id)descriptor;
@end
