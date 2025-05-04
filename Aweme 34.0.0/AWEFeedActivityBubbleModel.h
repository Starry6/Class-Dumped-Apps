@interface AWEFeedActivityBubbleModel : MTLModel
@property (nonatomic) NSString componentID;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString bubbleText;
@property (nonatomic) NSString bubbleID;
@property (nonatomic) NSString taskID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bubbleID;
- (BOOL)isValidWithError:;
- (long long)endTime;
- (void).cxx_destruct;
- (void)setTaskID:;
- (long long)startTime;
- (id)taskID;
- (id)componentID;
- (id)bubbleText;
+ (id)JSONKeyPathsByPropertyKey;
@end
