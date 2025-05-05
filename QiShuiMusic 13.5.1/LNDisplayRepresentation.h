@interface LNDisplayRepresentation : NSObject
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) LNStaticDeferredLocalizedString subtitle;
@property (nonatomic) LNImage image;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (id)initWithTitle:subtitle:image:;
+ (BOOL)supportsSecureCoding;
@end
