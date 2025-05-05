@interface CNAvatarChangeHistoryReportingTask : CNTask
@property (nonatomic) NSArray identifiers;
@property (nonatomic) <CNAvatarCacheChangeListenerDelegate> delegate;
- (id)run:;
- (id)identifiers;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithIdentifiers:delegate:;
@end
