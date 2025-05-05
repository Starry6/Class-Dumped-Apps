@interface HTSLiveCardDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger cardId;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString fallbackURL;
@property (nonatomic) NSInteger containerType;
@property (nonatomic) q durationMs;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) I bottom;
@property (nonatomic) I right;
@property (nonatomic) NSString containerPayload;
@property (nonatomic) HTSLiveCardTriggerConfig triggerConfig;
@property (nonatomic) BOOL hasTriggerConfig;
@property (nonatomic) NSMutableArray conditionListArray;
@property (nonatomic) Q conditionListArray_Count;
@property (nonatomic) HTSLiveCardPreDefeatStrategy preDefeatStrategy;
@property (nonatomic) BOOL hasPreDefeatStrategy;
@property (nonatomic) HTSLiveCardShowDefeatStrategy showDefeatStrategy;
@property (nonatomic) BOOL hasShowDefeatStrategy;
@property (nonatomic) HTSLiveLandScapeConfig landscapeConfig;
@property (nonatomic) BOOL hasLandscapeConfig;
@property (nonatomic) NSString accessibleName;
+ (id)descriptor;
@end
