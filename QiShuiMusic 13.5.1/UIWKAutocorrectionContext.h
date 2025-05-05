@interface UIWKAutocorrectionContext : NSObject
@property (nonatomic) NSString contextBeforeSelection;
@property (nonatomic) NSString selectedText;
@property (nonatomic) NSString contextAfterSelection;
@property (nonatomic) NSString markedText;
@property (nonatomic) {_NSRange=QQ} rangeInMarkedText;
- (void)dealloc;
- (void)setMarkedText:;
- (id)selectedText;
- (id)markedText;
- (void)setSelectedText:;
- (id)contextBeforeSelection;
- (void)setContextBeforeSelection:;
- (id)contextAfterSelection;
- (void)setContextAfterSelection:;
- (id)rangeInMarkedText;
- (void)setRangeInMarkedText:;
@end
