@interface SKThreadSafeMapTable : NSObject
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (id)copyWithZone:;
- (id)initWithNSMapTable:;
+ (BOOL)supportsSecureCoding;
@end
