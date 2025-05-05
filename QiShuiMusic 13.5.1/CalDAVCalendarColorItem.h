@interface CalDAVCalendarColorItem : CoreDAVItem
@property (nonatomic) NSString symbolicColorName;
@property (nonatomic) NSString colorString;
- (void)write:;
- (id)init;
- (void)setSymbolicColorName:;
- (id)symbolicColorName;
- (void)parserFoundAttributes:;
- (void).cxx_destruct;
- (id)colorString;
- (void)setColorString:;
@end
