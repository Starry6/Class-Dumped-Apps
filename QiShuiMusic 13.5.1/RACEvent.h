@interface RACEvent : NSObject
@property (nonatomic) @ object;
@property (nonatomic) Q eventType;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSError error;
@property (nonatomic) @ value;
- (id)initWithEventType:object:;
- (unsigned long long)eventType;
- (id)error;
- (unsigned long long)hash;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)eventWithValue:;
+ (id)completedEvent;
+ (id)eventWithError:;
@end
