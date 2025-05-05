@interface HTSLiveTrayEffectMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString subScene;
@property (nonatomic) HTSLiveCombinedText content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) HTSLiveTrayEffectMessage_Background background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) HTSLiveTrayEffectMessage_DynamicConfig dynamicConfig;
@property (nonatomic) BOOL hasDynamicConfig;
@property (nonatomic) HTSLiveTrayEffectMessage_PriorityConfig priorityConfig;
@property (nonatomic) BOOL hasPriorityConfig;
@property (nonatomic) NSMutableDictionary eventParams;
@property (nonatomic) Q eventParams_Count;
+ (id)descriptor;
@end
