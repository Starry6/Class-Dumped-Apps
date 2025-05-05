@interface IDSCurrentServerTimePair : NSObject
@property (nonatomic) Q initialProcessMonotonicTimeInNanoSeconds;
@property (nonatomic) Q initialServerTimeInNanoSeconds;
@property (nonatomic) BOOL isAccurate;
- (unsigned long long)initialServerTimeInNanoSeconds;
- (id)initWithInitialProcessMonotonicTimeInNanoSeconds:initialServerTimeInNanoSeconds:isAccurate:;
- (BOOL)isAccurate;
- (unsigned long long)initialProcessMonotonicTimeInNanoSeconds;
@end
