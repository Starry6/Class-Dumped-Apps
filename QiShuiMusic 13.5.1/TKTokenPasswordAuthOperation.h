@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation
@property (nonatomic) NSString localizedPasswordLabel;
@property (nonatomic) NSString password;
- (void)setPassword:;
- (id)password;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)importOperation:;
- (Class)baseClassForUI;
- (id)localizedPasswordLabel;
- (void)setLocalizedPasswordLabel:;
+ (BOOL)supportsSecureCoding;
@end
