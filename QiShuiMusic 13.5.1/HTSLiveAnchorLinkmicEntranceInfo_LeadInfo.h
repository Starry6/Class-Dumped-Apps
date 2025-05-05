@interface HTSLiveAnchorLinkmicEntranceInfo_LeadInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage leadImage;
@property (nonatomic) BOOL hasLeadImage;
@property (nonatomic) NSString bubbleText;
@property (nonatomic) NSInteger bubblePanel;
+ (id)descriptor;
@end
