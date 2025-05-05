@interface HTSLiveHighlightDataMicroApp : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q pinId;
@property (nonatomic) q msgId;
@property (nonatomic) NSString microAppId;
@property (nonatomic) NSString microAppAvatar;
@property (nonatomic) NSString microAppName;
@property (nonatomic) NSString microAppIntroduction;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
