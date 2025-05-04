@interface AWEIMMessageUnavailableInfo : NSObject
@property (nonatomic) BOOL unavailable;
@property (nonatomic) double timestamp;
@property (nonatomic) q reason;
- (double)timestamp;
- (void)setReason:;
- (void)setTimestamp:;
- (long long)reason;
- (void)setUnavailable:;
- (BOOL)unavailable;
+ (id)unavailableInfoWithUnavailable:;
+ (id)unavailableInfoWithUnavailable:timestamp:;
+ (id)unavailableInfoWithUnavailable:timestamp:reason:;
@end
