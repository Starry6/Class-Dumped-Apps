@interface FLEXWebsocketTransaction : FLEXURLTransaction
@property (nonatomic) NSURLSessionWebSocketMessage message;
@property (nonatomic) Q direction;
@property (nonatomic) q dataLength;
- (id)details;
- (long long)dataLength;
- (id)message;
- (unsigned long long)direction;
- (void).cxx_destruct;
+ (id)withMessage:task:direction:startTime:;
+ (id)withMessage:task:direction:;
@end
