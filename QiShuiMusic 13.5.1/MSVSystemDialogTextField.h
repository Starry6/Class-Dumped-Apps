@interface MSVSystemDialogTextField : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL secure;
@property (nonatomic) q keyboardType;
- (BOOL)isSecure;
- (long long)keyboardType;
- (void)setKeyboardType:;
- (id)initWithTitle:;
- (void)setTitle:;
- (void)setSecure:;
- (id)title;
- (void).cxx_destruct;
+ (id)textFieldWithTitle:;
+ (id)textFieldWithTitle:secure:;
@end
