@interface CLMClickEvent : NSObject
@property (nonatomic) Q absoluteTime;
@property (nonatomic) q eventType;
- (long long)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)absoluteTime;
- (id)description;
- (void)setAbsoluteTime:;
+ (BOOL)supportsSecureCoding;
@end
