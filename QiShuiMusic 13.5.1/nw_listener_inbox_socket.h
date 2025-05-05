@interface nw_listener_inbox_socket : nw_listener_inbox
- (BOOL)cancel;
- (id)start;
- (BOOL)suspend;
- (id)initWithParameters:delegate:;
- (BOOL)resume;
- (void).cxx_destruct;
- (id)description;
@end
