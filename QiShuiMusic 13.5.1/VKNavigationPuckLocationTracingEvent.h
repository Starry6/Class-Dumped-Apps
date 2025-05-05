@interface VKNavigationPuckLocationTracingEvent : NSObject
@property (nonatomic) q type;
@property (nonatomic) double timestamp;
@property (nonatomic) NSUUID locationUUID;
- (id)locationUUID;
- (long long)type;
- (void).cxx_destruct;
- (double)timestamp;
- (id)initWithEventType:timestamp:locationUUID:;
@end
