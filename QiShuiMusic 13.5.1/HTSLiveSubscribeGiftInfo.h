@interface HTSLiveSubscribeGiftInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL useAdvancedEffect;
@property (nonatomic) q giftId;
@property (nonatomic) NSString effectConfig;
@property (nonatomic) NSString effectSchema;
@property (nonatomic) NSMutableDictionary effectResource;
@property (nonatomic) Q effectResource_Count;
+ (id)descriptor;
@end
