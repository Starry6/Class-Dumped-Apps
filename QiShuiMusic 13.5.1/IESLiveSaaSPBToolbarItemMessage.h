@interface IESLiveSaaSPBToolbarItemMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger toolbarItemId;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) IESLiveSaaSPBBubbleConfig bubbleConfig;
@property (nonatomic) BOOL hasBubbleConfig;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) NSInteger messageType;
+ (id)descriptor;
@end
