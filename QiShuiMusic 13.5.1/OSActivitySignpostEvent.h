@interface OSActivitySignpostEvent : OSActivityLogMessageEvent
@property (nonatomic) Q signpostID;
- (unsigned long long)signpostID;
- (id)initWithEntry:;
@end
