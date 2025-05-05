@interface TouchEvent : NSObject
@property (nonatomic) {CGPoint=dd} position;
@property (nonatomic) double timestamp;
@property (nonatomic) q phase;
@property (nonatomic) q fingerId;
- (id)toDictionary;
- (id)position;
- (void)setPosition:;
- (double)timestamp;
- (void)setTimestamp:;
- (long long)phase;
- (void)setPhase:;
- (long long)fingerId;
- (void)setFingerId:;
+ (id)fromDictionary:;
@end
