@interface DOMHTMLLegendElement : DOMHTMLElement
@property (nonatomic) DOMHTMLFormElement form;
@property (nonatomic) NSString align;
@property (nonatomic) NSString accessKey;
- (id)form;
- (id)accessKey;
- (void)setAccessKey:;
- (id)align;
- (void)setAlign:;
@end
