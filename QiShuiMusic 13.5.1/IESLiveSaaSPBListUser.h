@interface IESLiveSaaSPBListUser : GPBMessage
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q linkmicId;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSInteger linkStatus;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) NSInteger userPosition;
@property (nonatomic) NSInteger silenceStatus;
@property (nonatomic) q modifyTime;
@property (nonatomic) q linkerId;
@property (nonatomic) NSInteger roleType;
@property (nonatomic) IESLiveSaaSPBListUser_Content content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) q mcStatus;
@property (nonatomic) q isBackground;
@property (nonatomic) IESLiveSaaSPBMicPosTagInfo micPosTagInfo;
@property (nonatomic) BOOL hasMicPosTagInfo;
@property (nonatomic) BOOL pkAvailable;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
