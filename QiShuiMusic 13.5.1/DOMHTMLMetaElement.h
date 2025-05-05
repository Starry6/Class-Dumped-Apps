@interface DOMHTMLMetaElement : DOMHTMLElement
@property (nonatomic) NSString content;
@property (nonatomic) NSString httpEquiv;
@property (nonatomic) NSString name;
@property (nonatomic) NSString scheme;
- (id)content;
- (void)setContent:;
- (void)setName:;
- (void)setScheme:;
- (id)scheme;
- (id)name;
- (id)httpEquiv;
- (void)setHttpEquiv:;
@end
