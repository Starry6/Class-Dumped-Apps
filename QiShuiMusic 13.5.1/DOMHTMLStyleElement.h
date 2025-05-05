@interface DOMHTMLStyleElement : DOMHTMLElement
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSString media;
@property (nonatomic) NSString type;
@property (nonatomic) DOMStyleSheet sheet;
- (void)setDisabled:;
- (void)setType:;
- (id)nonce;
- (BOOL)disabled;
- (id)type;
- (id)media;
- (void)setNonce:;
- (void)setMedia:;
- (id)sheet;
@end
