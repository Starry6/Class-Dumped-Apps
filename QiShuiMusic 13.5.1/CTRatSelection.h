@interface CTRatSelection : NSObject
@property (nonatomic) C mask;
@property (nonatomic) NSString selection;
@property (nonatomic) NSString preferred;
- (id)preferred;
- (void)setSelection:;
- (id)selection;
- (void)setPreferred:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned char)mask;
- (void)setMask:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
