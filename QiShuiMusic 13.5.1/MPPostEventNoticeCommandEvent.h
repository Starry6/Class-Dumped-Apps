@interface MPPostEventNoticeCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString eventIdentifier;
@property (nonatomic) NSString eventType;
- (id)eventType;
- (id)eventIdentifier;
- (void).cxx_destruct;
- (id)initWithCommand:mediaRemoteType:options:;
@end
