@interface AWEInteractModularizationButtonModel : AWEBaseApiModel
@property (nonatomic) Q buttonType;
@property (nonatomic) Q buttonColorStyle;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonSchema;
@property (nonatomic) AWEUserModel user;
- (unsigned long long)buttonColorStyle;
- (id)buttonSchema;
- (void)setButtonSchema:;
- (void)setButtonColorStyle:;
- (unsigned long long)buttonType;
- (id)user;
- (void)setUser:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setButtonText:;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
