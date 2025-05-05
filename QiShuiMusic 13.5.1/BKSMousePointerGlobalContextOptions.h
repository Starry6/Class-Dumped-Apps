@interface BKSMousePointerGlobalContextOptions : NSObject
@property (nonatomic) BOOL pinOnButtonDown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)pinOnButtonDown;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)build:;
@end
