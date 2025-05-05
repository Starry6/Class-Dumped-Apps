@interface BWMultitaskingSessionAnalyticsPayload : NSObject
@property (nonatomic) NSString clientApplicationID;
@property (nonatomic) BOOL windowed;
@property (nonatomic) BOOL pipEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)clientApplicationID;
- (void)setWindowed:;
- (void)setPipEnabled:;
- (void)setClientApplicationID:;
- (BOOL)windowed;
- (BOOL)pipEnabled;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
@end
