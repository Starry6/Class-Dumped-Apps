@interface UIActivityItemCustomization : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL enabled;
- (BOOL)enabled;
- (id)identifier;
- (id)title;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)_initWithTitle:identifier:;
+ (id)switchCustomizationWithTitle:identifier:value:valueChangedHandler:;
+ (id)pickerCustomizationWithTitle:identifier:options:selectedOptionIndex:valueChangedHandler:;
+ (id)actionCustomizationWithTitle:identifier:handler:;
@end
