@interface VKLabelExclusionRegion : NSObject
@property (nonatomic) I type;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
- (id)rect;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned int)type;
- (id)initWithRect:;
+ (BOOL)supportsSecureCoding;
@end
