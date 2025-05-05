@interface MBSizeInfo : NSObject
@property (nonatomic) Q size;
@property (nonatomic) Q state;
- (void)setState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)state;
- (void)setSize:;
- (id)copyWithZone:;
- (unsigned long long)size;
+ (BOOL)supportsSecureCoding;
@end
