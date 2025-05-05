@interface HTSLivePrivilegeScreenChatMessage : IESLivePBBaseMessage
@property (nonatomic) BOOL isFakeMessage;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) q style;
@property (nonatomic) q activityDanmuBackground;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) HTSLiveText rtfContentV2;
@property (nonatomic) BOOL hasRtfContentV2;
- (BOOL)isFakeMessage;
- (void)setIsFakeMessage:;
+ (id)descriptor;
@end
