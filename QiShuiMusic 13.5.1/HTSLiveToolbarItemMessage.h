@interface HTSLiveToolbarItemMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger toolbarItemId;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) HTSLiveBubbleConfig bubbleConfig;
@property (nonatomic) BOOL hasBubbleConfig;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) HTSLiveToolbarItemBehaviourParams behaviourParams;
@property (nonatomic) BOOL hasBehaviourParams;
+ (id)descriptor;
@end
