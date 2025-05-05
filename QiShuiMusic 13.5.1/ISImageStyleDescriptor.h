@interface ISImageStyleDescriptor : NSObject
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (nonatomic) IFColor tintColor;
@property (nonatomic) NSUUID digest;
- (id)digest;
- (BOOL)selectedVariant;
- (BOOL)templateVariant;
- (void)setTemplateVariant:;
- (id)tintColor;
- (id)initWithCoder:;
- (void)setSelectedVariant:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultStyleDescriptor;
@end
