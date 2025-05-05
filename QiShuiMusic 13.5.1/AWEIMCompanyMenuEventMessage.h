@interface AWEIMCompanyMenuEventMessage : AWEIMMessage
@property (nonatomic) NSString menuKey;
@property (nonatomic) NSString eventName;
- (id)menuKey;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setMenuKey:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
