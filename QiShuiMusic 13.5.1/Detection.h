@interface Detection : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) q oid;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setBounds:;
- (id)bounds;
- (long long)oid;
- (void)setOid:;
+ (BOOL)supportsSecureCoding;
@end
