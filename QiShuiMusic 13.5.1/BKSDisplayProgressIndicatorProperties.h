@interface BKSDisplayProgressIndicatorProperties : NSObject
@property (nonatomic) q style;
@property (nonatomic) {CGPoint=dd} position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)position;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (long long)style;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)_initWithStyle:position:;
+ (BOOL)supportsSecureCoding;
+ (id)progressIndicatorWithStyle:position:;
@end
