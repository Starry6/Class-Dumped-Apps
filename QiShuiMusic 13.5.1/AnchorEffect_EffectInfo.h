@interface AnchorEffect_EffectInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage barIcon;
@property (nonatomic) BOOL hasBarIcon;
@property (nonatomic) HTSLiveImage barMinIcon;
@property (nonatomic) BOOL hasBarMinIcon;
@property (nonatomic) HTSLiveImage barAuraURL;
@property (nonatomic) BOOL hasBarAuraURL;
@property (nonatomic) HTSLiveUser sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q insertTime;
@property (nonatomic) HTSLiveImage detailIcon;
@property (nonatomic) BOOL hasDetailIcon;
+ (id)descriptor;
@end
