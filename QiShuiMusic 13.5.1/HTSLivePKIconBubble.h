@interface HTSLivePKIconBubble : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage displayIcon;
@property (nonatomic) BOOL hasDisplayIcon;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSInteger bubbleType;
@property (nonatomic) NSString activityName;
@property (nonatomic) q showTime;
@property (nonatomic) q showCount;
+ (id)descriptor;
@end
