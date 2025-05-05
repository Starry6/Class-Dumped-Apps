@interface HTSLiveCommonCardDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger cardId;
@property (nonatomic) DSLDetail dslDetail;
@property (nonatomic) BOOL hasDslDetail;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) I bottom;
@property (nonatomic) I right;
@property (nonatomic) I top;
@property (nonatomic) I left;
@property (nonatomic) NSMutableArray initFieldsArray;
@property (nonatomic) Q initFieldsArray_Count;
@property (nonatomic) q durationMs;
@property (nonatomic) HTSLiveCardTriggerConfig triggerConfig;
@property (nonatomic) BOOL hasTriggerConfig;
@property (nonatomic) NSMutableArray conditionListArray;
@property (nonatomic) Q conditionListArray_Count;
@property (nonatomic) HTSLiveCardPreDefeatStrategy preDefeatStrategy;
@property (nonatomic) BOOL hasPreDefeatStrategy;
@property (nonatomic) HTSLiveCardShowDefeatStrategy showDefeatStrategy;
@property (nonatomic) BOOL hasShowDefeatStrategy;
@property (nonatomic) NSString accessibleName;
@property (nonatomic) HTSLiveLandScapeConfig landscapeConfig;
@property (nonatomic) BOOL hasLandscapeConfig;
+ (id)descriptor;
@end
