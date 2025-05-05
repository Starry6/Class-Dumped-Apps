@interface HTSLiveNotifyEffectMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray iconsArray;
@property (nonatomic) Q iconsArray_Count;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveNotifyEffectMessage_Background background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) HTSLiveNotifyEffectMessage_DynamicConfig dynamicConfig;
@property (nonatomic) BOOL hasDynamicConfig;
@property (nonatomic) HTSLiveCombinedText textV2;
@property (nonatomic) BOOL hasTextV2;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) HTSLiveNotifyEffectMessage_SceneConfig sceneConfig;
@property (nonatomic) BOOL hasSceneConfig;
@property (nonatomic) NSMutableDictionary buriedPoint;
@property (nonatomic) Q buriedPoint_Count;
+ (id)descriptor;
@end
