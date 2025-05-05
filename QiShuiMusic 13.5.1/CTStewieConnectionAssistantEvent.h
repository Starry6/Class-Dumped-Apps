@interface CTStewieConnectionAssistantEvent : NSObject
@property (nonatomic) q eventType;
- (long long)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
