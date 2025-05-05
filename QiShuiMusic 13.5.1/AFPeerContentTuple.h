@interface AFPeerContentTuple : NSObject
@property (nonatomic) AFPeerInfo info;
@property (nonatomic) @ content;
- (id)content;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithInfo:content:;
+ (BOOL)supportsSecureCoding;
@end
