@interface AWEUserLoginInputModel : NSObject
@property (nonatomic) NSString placeholder;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) q maxLength;
@property (nonatomic) Q eyeViewStyle;
- (id)initWithPlaceholder:isSecure:maxLength:;
- (id)initWithPlaceholder:isSecure:maxLength:eyeViewStyle:;
- (unsigned long long)eyeViewStyle;
- (void)setEyeViewStyle:;
- (long long)maxLength;
- (void)setPlaceholder:;
- (BOOL)isSecure;
- (id)placeholder;
- (void).cxx_destruct;
- (void)setMaxLength:;
- (void)setIsSecure:;
@end
