@interface NabobPrivilegeEntranceResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString URL;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) NSString defaultPrompt;
@property (nonatomic) HTSLiveFlexImageStruct bubbleBackgroundImage;
@property (nonatomic) BOOL hasBubbleBackgroundImage;
@property (nonatomic) HTSLiveText bubbleText;
@property (nonatomic) BOOL hasBubbleText;
@property (nonatomic) NSInteger entranceType;
@property (nonatomic) q taskId;
@property (nonatomic) NSString bubbleURL;
@property (nonatomic) HTSLiveText awardTips;
@property (nonatomic) BOOL hasAwardTips;
@property (nonatomic) NSString bubbleInfo;
@property (nonatomic) BOOL light;
@property (nonatomic) LightInfo lightInfo;
@property (nonatomic) BOOL hasLightInfo;
@property (nonatomic) DynamicInfo dynamicInfo;
@property (nonatomic) BOOL hasDynamicInfo;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
