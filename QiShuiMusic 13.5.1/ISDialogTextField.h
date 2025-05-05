@interface ISDialogTextField : NSObject
@property (nonatomic) q keyboardType;
@property (nonatomic) BOOL secure;
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSecure;
- (id)initWithXPCEncoding:;
- (id)init;
- (long long)keyboardType;
- (void)dealloc;
- (id)copyXPCEncoding;
- (void)setKeyboardType:;
- (void)setTitle:;
- (void)setSecure:;
- (void)setValue:;
- (id)title;
- (id)value;
+ (id)textFieldWithTitle:;
@end
