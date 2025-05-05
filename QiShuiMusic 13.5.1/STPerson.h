@interface STPerson : STSiriModelObject
@property (nonatomic) NSSet contactHandles;
@property (nonatomic) NSString fullName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullName;
- (id)initWithCoder:;
- (void)setFullName:;
- (void)encodeWithCoder:;
- (id)contactHandles;
- (void).cxx_destruct;
- (id)description;
- (void)setContactHandles:;
+ (BOOL)supportsSecureCoding;
@end
