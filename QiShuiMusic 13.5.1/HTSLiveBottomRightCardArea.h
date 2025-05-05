@interface HTSLiveBottomRightCardArea : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) I priority;
@property (nonatomic) NSInteger toolbarType;
@property (nonatomic) HTSLiveCombineType combineType;
@property (nonatomic) BOOL hasCombineType;
@property (nonatomic) HTSLiveCardDisplayInfo cardDisplayInfo;
@property (nonatomic) BOOL hasCardDisplayInfo;
@property (nonatomic) HTSLiveAnimConfig animConfig;
@property (nonatomic) BOOL hasAnimConfig;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) NSInteger mockType;
+ (id)descriptor;
@end
