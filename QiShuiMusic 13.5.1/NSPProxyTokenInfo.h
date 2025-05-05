@interface NSPProxyTokenInfo : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportErrorForTokenRegistration:error:withOptions:;
- (id)init;
- (void)dealloc;
- (void)tokenLowWaterMarkReached;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
