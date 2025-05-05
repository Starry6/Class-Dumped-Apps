@interface DOMHTMLButtonElement : DOMHTMLElement
@property (nonatomic) BOOL autofocus;
@property (nonatomic) BOOL disabled;
@property (nonatomic) DOMHTMLFormElement form;
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL willValidate;
@property (nonatomic) NSString accessKey;
- (void)setDisabled:;
- (void)setName:;
- (void)setType:;
- (BOOL)disabled;
- (void)setValue:;
- (id)type;
- (id)value;
- (id)name;
- (id)form;
- (id)accessKey;
- (void)setAccessKey:;
- (void)click;
- (BOOL)autofocus;
- (void)setAutofocus:;
- (BOOL)willValidate;
- (int)structuralComplexityContribution;
@end
