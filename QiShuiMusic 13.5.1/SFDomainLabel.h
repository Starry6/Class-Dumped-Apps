@interface SFDomainLabel : UIView
@property (nonatomic) NSString text;
@property (nonatomic) BOOL secure;
- (BOOL)isSecure;
- (void)_commonInit;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)text;
- (id)initWithText:isSecure:;
- (void)setText:isSecure:;
- (id)_makeAttributedString;
@end
