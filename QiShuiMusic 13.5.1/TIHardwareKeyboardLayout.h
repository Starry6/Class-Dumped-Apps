@interface TIHardwareKeyboardLayout : TIKeyboardLayout
@property (nonatomic) q keyboardType;
- (long long)keyboardType;
- (id)_ISOFrames;
- (id)initWithCoder:;
- (id)_ANSIFrames;
- (void)addString:forKeyCode:;
- (void)encodeWithCoder:;
- (void)addExactString:forKeyCode:;
- (id)_frameForKeyCode:;
- (id)initWithKeyboardType:;
- (BOOL)isEqual:;
- (id)_JISFrames;
+ (BOOL)supportsSecureCoding;
+ (void)flushLayoutCaches;
@end
