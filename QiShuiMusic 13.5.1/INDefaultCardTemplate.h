@interface INDefaultCardTemplate : NSObject
@property (nonatomic) INImage _keyImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) INImage image;
- (void)_injectProxiesForImages:completion:;
- (id)initWithTitle:;
- (void)setImage:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)_compareSubProducerOne:subProducerTwo:;
- (id)_keyImage;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
