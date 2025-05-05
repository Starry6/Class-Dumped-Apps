@interface ICSharedListeningConnectionReport : NSObject
@property (nonatomic) NSMutableArray topLevelEvents;
@property (nonatomic) NSMapTable allEvents;
@property (nonatomic) NSString formattedReport;
@property (nonatomic) @ analyticsPayload;
@property (nonatomic) NSString sharedListeningSessionIdentifier;
@property (nonatomic) NSString groupSessionIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)analyticsPayload;
- (id)init;
- (id)allEvents;
- (void).cxx_destruct;
- (void)startEvent:;
- (void)endEvent:;
- (void)endEvent:withError:;
- (id)groupSessionIdentifier;
- (void)setGroupSessionIdentifier:;
- (id)sharedListeningSessionIdentifier;
- (void)setSharedListeningSessionIdentifier:;
- (void)startEvent:withParentEvent:;
- (id)formattedReport;
- (void)_addEvents:toReportString:eventLevel:;
- (id)topLevelEvents;
- (void)setTopLevelEvents:;
- (void)setAllEvents:;
@end
