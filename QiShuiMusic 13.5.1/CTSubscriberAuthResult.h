@interface CTSubscriberAuthResult : NSObject
@property (nonatomic) NSData auts;
@property (nonatomic) NSData res;
@property (nonatomic) NSData sres;
@property (nonatomic) NSData kc;
@property (nonatomic) NSData ck;
@property (nonatomic) NSData ik;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)auts;
- (void)setAuts:;
- (id)res;
- (void)setRes:;
- (id)sres;
- (void)setSres:;
- (id)kc;
- (void)setKc:;
- (id)ck;
- (void)setCk:;
- (id)ik;
- (void)setIk:;
+ (BOOL)supportsSecureCoding;
@end
