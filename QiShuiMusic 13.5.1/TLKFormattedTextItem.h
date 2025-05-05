@interface TLKFormattedTextItem : TLKObject
@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) q color;
- (void)setColor:;
- (BOOL)isEmphasized;
- (BOOL)hasContent;
- (long long)color;
- (BOOL)isBold;
- (void)setIsEmphasized:;
- (unsigned long long)_itemType;
- (void)setIsBold:;
@end
