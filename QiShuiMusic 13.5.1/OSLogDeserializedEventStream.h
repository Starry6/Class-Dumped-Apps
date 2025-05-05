@interface OSLogDeserializedEventStream : OSLogEventStreamBase
@property (nonatomic) BOOL hasActivated;
@property (nonatomic) _OSLogEventSerializationMetadata metadata;
@property (nonatomic) <OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate;
@property (nonatomic) NSArray curEventArray;
@property (nonatomic) NSEnumerator eventDictionaryEnumerator;
@property (nonatomic) NSDate firstDate;
@property (nonatomic) NSDate lastDate;
- (id)metadata;
- (void)activateStreamFromDate:;
- (id)lastDate;
- (id)_eventArrayFromData:;
- (void)_iterateThroughEventsWithProxy:filter:startingDate:;
- (id)_nextEventDictionary;
- (id)dataSourceDelegate;
- (id)firstDate;
- (id)eventDictionaryEnumerator;
- (void).cxx_destruct;
- (BOOL)hasActivated;
- (id)initWithDataSourceDelegate:;
- (void)_updateEventArray;
- (id)curEventArray;
- (void)activate;
- (void)setHasActivated:;
@end
