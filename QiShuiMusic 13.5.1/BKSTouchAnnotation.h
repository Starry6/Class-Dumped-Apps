@interface BKSTouchAnnotation : NSObject
@property (nonatomic) I touchIdentifier;
@property (nonatomic) NSString text;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUniqueIdentifier:;
- (id)uniqueIdentifier;
- (void)setText:;
- (void)setTouchIdentifier:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (unsigned int)touchIdentifier;
- (id)text;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (BOOL)supportsSecureCoding;
@end
