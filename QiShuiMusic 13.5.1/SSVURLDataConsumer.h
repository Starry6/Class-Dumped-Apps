@interface SSVURLDataConsumer : NSObject
- (id)objectForData:response:error:;
+ (id)consumer;
@end
