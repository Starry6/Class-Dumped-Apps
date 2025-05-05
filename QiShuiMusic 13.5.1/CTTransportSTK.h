@interface CTTransportSTK : NSObject
@property (nonatomic) NSInteger index;
@property (nonatomic) NSData key_epki;
@property (nonatomic) NSData stk;
- (id)initWithCoder:;
- (int)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)key_epki;
- (void)setKey_epki:;
- (id)initWithSTK:forIdx:;
- (id)initWithSTK:forIdx:epki:;
- (id)stk;
- (void)setStk:;
+ (BOOL)supportsSecureCoding;
@end
