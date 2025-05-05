@interface CPContactMessageButton : CPButton
@property (nonatomic) NSString phoneOrEmail;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)phoneOrEmail;
- (id)initWithPhoneOrEmail:;
+ (BOOL)supportsSecureCoding;
@end
