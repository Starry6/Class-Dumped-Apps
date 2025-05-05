@interface DOMHTMLParamElement : DOMHTMLElement
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
@property (nonatomic) NSString value;
@property (nonatomic) NSString valueType;
- (void)setValueType:;
- (void)setName:;
- (void)setType:;
- (void)setValue:;
- (id)type;
- (id)value;
- (id)name;
- (id)valueType;
@end
