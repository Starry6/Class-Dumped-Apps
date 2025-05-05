@interface CTIPFilterEndpoint : NSObject
@property (nonatomic) NSString addr;
@property (nonatomic) NSNumber maskLen;
@property (nonatomic) NSNumber port;
@property (nonatomic) NSNumber portRange;
- (id)port;
- (void)setPort:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)addr;
- (void)setAddr:;
- (id)maskLen;
- (void)setMaskLen:;
- (id)portRange;
- (void)setPortRange:;
+ (BOOL)supportsSecureCoding;
@end
