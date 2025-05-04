@interface AWEECMallBubbleTriggerResponse : MTLModel
@property (nonatomic) AWEECMallSyncMessage syncMsg;
@property (nonatomic) q statusCode;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) AWEECMallBubbleModel bubbleMsg;
@property (nonatomic) AWEECMallMessageRedTag redTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)bubbleMsg;
- (void)setSyncMsg:;
- (id)redTag;
- (id)syncMsg;
- (void)setBubbleMsg:;
- (void)setRedTag:;
- (long long)statusCode;
- (id)extra;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
