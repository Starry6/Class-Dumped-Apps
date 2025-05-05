@interface TITypologyRecordKeyboardLayout : TITypologyRecord
@property (nonatomic) TIKeyboardLayout keyboardLayout;
@property (nonatomic) NSString name;
- (id)shortDescription;
- (void)setName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)keyboardLayout;
- (void)setKeyboardLayout:;
+ (BOOL)supportsSecureCoding;
@end
