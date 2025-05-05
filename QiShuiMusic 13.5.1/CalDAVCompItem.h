@interface CalDAVCompItem : CoreDAVItem
@property (nonatomic) NSString nameAttribute;
- (void)write:;
- (id)init;
- (void)parserFoundAttributes:;
- (id)nameAttribute;
- (void).cxx_destruct;
- (void)setNameAttribute:;
@end
