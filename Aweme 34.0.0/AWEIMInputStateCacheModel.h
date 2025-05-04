@interface AWEIMInputStateCacheModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) double timeInterval;
@property (nonatomic) q state;
- (double)timeInterval;
- (long long)state;
- (id)conversationID;
- (void)setTimeInterval:;
- (void).cxx_destruct;
- (void)setState:;
- (void)setConversationID:;
@end
