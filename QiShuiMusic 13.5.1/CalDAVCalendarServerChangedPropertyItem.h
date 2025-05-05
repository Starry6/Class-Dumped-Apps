@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem
@property (nonatomic) NSString nameAttribute;
@property (nonatomic) NSString typeAttribute;
@property (nonatomic) NSMutableSet changedParameters;
- (id)copyParseRules;
- (void)parserFoundAttributes:;
- (id)nameAttribute;
- (void).cxx_destruct;
- (void)setNameAttribute:;
- (id)typeAttribute;
- (void)setTypeAttribute:;
- (id)initWithNameSpace:andName:;
- (void)addChangedParameter:;
- (id)changedParameters;
- (void)setChangedParameters:;
@end
