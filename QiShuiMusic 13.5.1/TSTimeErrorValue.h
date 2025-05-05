@interface TSTimeErrorValue : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) q error;
- (long long)error;
- (unsigned long long)timestamp;
- (id)description;
- (id)initWithTimestamp:andError:;
+ (id)timeErrorSequenceWithTimestamps:timeError:count:;
@end
