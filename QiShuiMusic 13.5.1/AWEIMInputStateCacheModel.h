@interface AWEIMInputStateCacheModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) double timeInterval;
@property (nonatomic) q state;
- (void)setState:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (long long)state;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
@end
