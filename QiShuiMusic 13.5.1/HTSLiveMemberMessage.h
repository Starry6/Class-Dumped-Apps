@interface HTSLiveMemberMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveUser operator_p;
@property (nonatomic) BOOL hasOperator_p;
@property (nonatomic) q action;
@property (nonatomic) q memberCount;
@property (nonatomic) BOOL isSetToAdmin;
@property (nonatomic) BOOL isTopUser;
@property (nonatomic) q rankScore;
@property (nonatomic) q topUserNo;
@property (nonatomic) q enterType;
@property (nonatomic) NSString actionDescription;
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveMemberMessage_EffectConfig effectConfig;
@property (nonatomic) BOOL hasEffectConfig;
@property (nonatomic) NSString popStr;
@property (nonatomic) HTSLiveMemberMessage_EffectConfig enterEffectConfig;
@property (nonatomic) BOOL hasEnterEffectConfig;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) HTSLiveImage backgroundImageV2;
@property (nonatomic) BOOL hasBackgroundImageV2;
@property (nonatomic) HTSLiveText anchorDisplayText;
@property (nonatomic) BOOL hasAnchorDisplayText;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) q userEnterTipType;
@property (nonatomic) q anchorEnterTipType;
@property (nonatomic) NSMutableDictionary buriedPoint;
@property (nonatomic) Q buriedPoint_Count;
@property (nonatomic) NSMutableDictionary alternativeEffectConfig;
@property (nonatomic) Q alternativeEffectConfig_Count;
@property (nonatomic) HTSLiveMemberMessage_PicoEffectConfig picoEnterEffectConfig;
@property (nonatomic) BOOL hasPicoEnterEffectConfig;
+ (id)descriptor;
@end
