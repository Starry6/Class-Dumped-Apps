@interface HTSLivePlayModeGuideBubbleContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger playMode;
@property (nonatomic) NSString toast;
@property (nonatomic) NSInteger playModeEnhanceType;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
