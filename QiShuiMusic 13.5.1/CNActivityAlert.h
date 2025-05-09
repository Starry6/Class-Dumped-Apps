@interface CNActivityAlert : NSObject
@property (nonatomic) NSString sound;
@property (nonatomic) NSString vibration;
@property (nonatomic) BOOL ignoreMute;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValid:;
- (void)setSound:;
- (id)userInfo;
- (id)sound;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setIgnoreMute:;
- (BOOL)ignoreMute;
- (id)initWithSound:vibration:ignoreMute:;
- (id)vibration;
- (id)initWithSound:vibration:ignoreMute:userInfo:;
- (void)setVibration:;
+ (BOOL)supportsSecureCoding;
@end
