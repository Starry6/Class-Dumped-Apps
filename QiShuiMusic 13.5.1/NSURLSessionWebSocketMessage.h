@interface NSURLSessionWebSocketMessage : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSData data;
@property (nonatomic) NSString string;
- (id)string;
- (id)data;
- (id)initWithString:;
- (long long)type;
- (id)initWithData:;
- (void).cxx_destruct;
@end
