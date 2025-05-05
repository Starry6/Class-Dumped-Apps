@interface FMXPCActivityCriteria : NSObject
@property (nonatomic) q priority;
@property (nonatomic) BOOL repeating;
@property (nonatomic) q delay;
@property (nonatomic) q gracePeriod;
@property (nonatomic) q interval;
@property (nonatomic) Q options;
- (void)setOptions:;
- (long long)gracePeriod;
- (void)setPriority:;
- (long long)delay;
- (void)setDelay:;
- (unsigned long long)options;
- (void)setInterval:;
- (id)description;
- (void)setRepeating:;
- (id)initWithXPCObject:;
- (BOOL)isEqual:;
- (void)setGracePeriod:;
- (long long)interval;
- (long long)priority;
- (BOOL)repeating;
- (id)initWithPriority:repeating:delay:gracePeriod:interval:options:;
- (id)xpcDictionary;
- (long long)_priorityFromString:;
+ (unsigned long long)_optionsFromXPCObject:;
@end
