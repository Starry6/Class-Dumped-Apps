@interface SUCoreEvent : NSObject
@property (nonatomic) NSMutableDictionary allFields;
@property (nonatomic) BOOL changedSinceReported;
@property (nonatomic) NSURL serverURL;
@property (nonatomic) NSString reportedUUID;
- (BOOL)isSuccess;
- (void).cxx_destruct;
- (id)serverURL;
- (void)setServerURL:;
- (id)initWithEventDictionary:extendingWith:reportingToServer:;
- (BOOL)isEqualErrorEvent:;
- (void)incrementErrorCount;
- (id)getAugmentedEvent;
- (id)allFields;
- (void)setAllFields:;
- (BOOL)changedSinceReported;
- (void)setChangedSinceReported:;
- (id)reportedUUID;
- (void)setReportedUUID:;
@end
