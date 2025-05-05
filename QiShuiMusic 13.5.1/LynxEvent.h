@interface LynxEvent : NSObject
@property (nonatomic) q targetSign;
@property (nonatomic) q currentTargetSign;
@property (nonatomic) NSString eventName;
@property (nonatomic) q eventType;
@property (nonatomic) double timestamp;
- (long long)currentTargetSign;
- (id)generateEventBody;
- (id)initWithName:type:targetSign:;
- (id)initWithName:type:targetSign:currentTargetSign:;
- (long long)targetSign;
- (id)initWithName:type:;
- (long long)eventType;
- (void)setTimestamp:;
- (id)eventName;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)canCoalesce;
@end
