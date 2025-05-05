@interface CTStewieEmergencyNotifyOptionMessage : NSObject
@property (nonatomic) q notifyOption;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)notifyOption;
- (void)setNotifyOption:;
- (id)initWithNotifyOption:error:;
- (BOOL)isEqualToEmergencyUpdateNotifyOptionMessage:;
+ (BOOL)supportsSecureCoding;
@end
