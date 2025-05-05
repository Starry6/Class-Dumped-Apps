@interface CalDAVCalendarServerActionItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren create;
@property (nonatomic) CalDAVCalendarServerUpdateItem update;
@property (nonatomic) CalDAVCalendarServerCancelItem cancel;
@property (nonatomic) CalDAVCalendarServerReplyItem reply;
- (id)reply;
- (id)copyParseRules;
- (id)init;
- (id)cancel;
- (void)setReply:;
- (void)setCancel:;
- (void).cxx_destruct;
- (id)update;
- (id)create;
- (void)setUpdate:;
- (void)setCreate:;
@end
