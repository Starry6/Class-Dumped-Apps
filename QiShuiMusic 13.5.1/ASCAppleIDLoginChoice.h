@interface ASCAppleIDLoginChoice : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) Q loginChoiceKind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)user;
- (void).cxx_destruct;
- (id)initWithUser:;
- (BOOL)isEqual:;
- (unsigned long long)loginChoiceKind;
+ (BOOL)supportsSecureCoding;
@end
