@interface AWEIMCompanyMenuEventMessage : AWEIMMessage
@property (nonatomic) NSString menuKey;
@property (nonatomic) NSString eventName;
- (id)initWithContentDict:;
- (id)menuKey;
- (void)setMenuKey:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
@end
