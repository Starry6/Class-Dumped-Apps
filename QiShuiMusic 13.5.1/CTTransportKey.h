@interface CTTransportKey : NSObject
@property (nonatomic) NSInteger index;
@property (nonatomic) NSData key;
@property (nonatomic) NSData key_epki;
@property (nonatomic) NSData retiredKey_epki;
@property (nonatomic) BOOL last_resort;
- (id)key;
- (id)initWithCoder:;
- (int)index;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithKey:epki:forIdx:toReplaceEpki:isLastResort:;
- (id)initWithKey:forIdx:toReplace:;
- (id)initWithKey:epki:forIdx:toReplace:epki:;
- (id)key_epki;
- (void)setKey_epki:;
- (id)retiredKey_epki;
- (void)setRetiredKey_epki:;
- (BOOL)last_resort;
- (void)setLast_resort:;
+ (BOOL)supportsSecureCoding;
@end
