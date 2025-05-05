@interface BKSMousePointerEventGlobalRoute : NSObject
@property (nonatomic) I contextID;
@property (nonatomic) BKSMousePointerGlobalContextOptions options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned int)contextID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)build:;
@end
