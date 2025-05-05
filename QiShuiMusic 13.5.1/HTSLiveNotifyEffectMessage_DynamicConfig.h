@interface HTSLiveNotifyEffectMessage_DynamicConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger stayTime;
@property (nonatomic) NSInteger maxStayTime;
@property (nonatomic) NSInteger displayEffectType;
+ (id)descriptor;
@end
