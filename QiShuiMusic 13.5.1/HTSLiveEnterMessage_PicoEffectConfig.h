@interface HTSLiveEnterMessage_PicoEffectConfig : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveImage textIcon;
@property (nonatomic) BOOL hasTextIcon;
@property (nonatomic) NSInteger stayTime;
@property (nonatomic) HTSLiveImage badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) q centerAnimAssetId;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) NSString dressId;
+ (id)descriptor;
@end
