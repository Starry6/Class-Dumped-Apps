@interface HTSLiveNotifyEffectMessage_SceneConfig : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q priority;
@property (nonatomic) BOOL needAggregate;
@property (nonatomic) q aggregateNum;
@property (nonatomic) HTSLiveText aggregateText;
@property (nonatomic) BOOL hasAggregateText;
@property (nonatomic) NSString subScene;
@property (nonatomic) q maxWaitTime;
+ (id)descriptor;
@end
