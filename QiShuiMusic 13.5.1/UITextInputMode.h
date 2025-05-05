@interface UITextInputMode : NSObject
@property (nonatomic) NSString primaryLanguage;
- (id)primaryLanguage;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (id)currentInputMode;
+ (BOOL)supportsSecureCoding;
+ (id)activeInputModes;
@end
