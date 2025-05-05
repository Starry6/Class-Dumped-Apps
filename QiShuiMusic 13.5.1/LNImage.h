@interface LNImage : NSObject
@property (nonatomic) INImage inImage;
@property (nonatomic) LNImage proxiedImageCopy;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSystemImageNamed:;
- (id)inImage;
- (id)initWithURL:width:height:renderingMode:;
- (id)initWithImageNamed:renderingMode:;
- (id)proxiedImageCopy;
- (id)initWithImageNamed:;
- (id)initWithData:renderingMode:;
- (id)initWithURL:renderingMode:;
- (id)initWithINImage:;
+ (BOOL)supportsSecureCoding;
@end
