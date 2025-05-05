@interface SSPaymentSheetPriceSectionItem : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString price;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)initWithDictionary:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)price;
- (id)copyWithZone:;
- (void)setPrice:;
- (void)_parseDictionary:withCaseControl:;
@end
