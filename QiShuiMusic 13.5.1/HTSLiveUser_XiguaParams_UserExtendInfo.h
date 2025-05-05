@interface HTSLiveUser_XiguaParams_UserExtendInfo : IESLivePBBaseMessage
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString rSchemaURL;
@property (nonatomic) HTSLiveUser_XiguaParams_UserExtendInfo_RocketSchema rocketSchemaInfo;
@property (nonatomic) BOOL hasRocketSchemaInfo;
+ (id)descriptor;
@end
