@interface AMSDialogTextField : NSObject
@property (nonatomic) q keyboardType;
@property (nonatomic) NSString placeholder;
@property (nonatomic) BOOL secure;
@property (nonatomic) q tag;
@property (nonatomic) NSString text;
- (long long)tag;
- (long long)keyboardType;
- (void)setKeyboardType:;
- (void)setText:;
- (id)placeholder;
- (id)initWithCoder:;
- (void)setPlaceholder:;
- (void)setSecure:;
- (void)encodeWithCoder:;
- (void)setTag:;
- (void).cxx_destruct;
- (BOOL)secure;
- (id)text;
+ (BOOL)supportsSecureCoding;
+ (id)textFieldWithPlaceholder:secure:;
@end
