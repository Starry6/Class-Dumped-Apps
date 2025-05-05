@interface CRListItemMarker : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) {_NSRange=QQ} itemizingComponentRange;
@property (nonatomic) q type;
- (void)setRange:;
- (void)setType:;
- (void)setStringValue:;
- (id)range;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (long long)integerValue;
- (id)initWithType:stringValue:range:itemizingComponentRange:;
- (BOOL)canBeSucceededByMarker:;
- (BOOL)_canCompositeDecimalBeSucceededByCompositeDecimal:;
- (id)_valuesFromCompositeDecimal;
- (long long)_valueFromDecorativeDecimal;
- (long long)_valueFromDecimal;
- (long long)_valueFromLowercaseLatin;
- (long long)_valueFromUppercaseLatin;
- (id)itemizingComponentRange;
- (void)setItemizingComponentRange:;
@end
