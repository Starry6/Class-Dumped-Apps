@interface DOMHTMLLabelElement : DOMHTMLElement
@property (nonatomic) DOMHTMLFormElement form;
@property (nonatomic) NSString htmlFor;
@property (nonatomic) NSString accessKey;
- (id)form;
- (id)accessKey;
- (void)setAccessKey:;
- (id)control;
- (id)htmlFor;
- (void)setHtmlFor:;
@end
