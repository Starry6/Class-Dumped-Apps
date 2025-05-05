@interface HTSLiveFeedbackCard : IESLivePBBaseMessage
@property (nonatomic) q feedbackCardState;
@property (nonatomic) NSString title;
@property (nonatomic) q feedbackId;
@property (nonatomic) NSMutableArray questionArray;
@property (nonatomic) Q questionArray_Count;
@property (nonatomic) HTSLiveFeedbackCard_Condition condition;
@property (nonatomic) BOOL hasCondition;
@property (nonatomic) q roomId;
@property (nonatomic) HTSLiveRoom roomData;
@property (nonatomic) BOOL hasRoomData;
@property (nonatomic) NSString negativeText;
@property (nonatomic) HTSLiveImage bgm;
@property (nonatomic) BOOL hasBgm;
@property (nonatomic) NSInteger feedbackType;
@property (nonatomic) NSInteger inflowFeedbackType;
- (long long)feedbackCardState;
- (void)setFeedbackCardState:;
- (id)feedbackID;
+ (id)descriptor;
@end
