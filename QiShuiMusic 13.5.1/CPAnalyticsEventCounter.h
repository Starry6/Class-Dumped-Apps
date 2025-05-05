@interface CPAnalyticsEventCounter : NSObject
@property (nonatomic) CPAnalyticsEventMatcher matcher;
@property (nonatomic) NSString countKey;
@property (nonatomic) Q count;
@property (nonatomic) NSString name;
- (void)setCount:;
- (void)resetCount;
- (id)initWithConfig:;
- (id)initWithEventName:;
- (void)countEvent:;
- (id)matcher;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)count;
- (id)countKey;
- (id)initWithName:matcher:;
+ (id)_validateAndParseEventName:;
@end
