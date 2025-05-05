@interface CHTextInputTarget : NSObject
@property (nonatomic) NSNumber inputTargetIdentifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (id)initWithCoder:;
- (id)frame;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)inputTargetIdentifier;
- (id)initWithIdentifier:frame:;
- (BOOL)isEqualToInputTarget:;
+ (BOOL)supportsSecureCoding;
@end
