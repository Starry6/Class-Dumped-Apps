@interface DIRSEventListener : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyEventsStored:withOptions:;
- (void)_formatObservedEvent:to:ignoreProperties:;
- (void)notifyEventsAccepted:withOptions:;
- (void)notifyEventsDropped:withOptions:withError:;
- (void)notifyEventsUploaded:withOptions:;
- (void)commonInit;
- (void)run;
- (void).cxx_destruct;
+ (id)moduleId;
+ (id)moduleVersion;
@end
