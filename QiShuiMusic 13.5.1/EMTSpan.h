@interface EMTSpan : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) BOOL doNotTranslate;
- (id)identifier;
- (id)range;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithIdentifier:range:doNotTranslate:;
- (BOOL)doNotTranslate;
@end
