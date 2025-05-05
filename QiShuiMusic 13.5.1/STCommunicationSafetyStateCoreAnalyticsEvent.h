@interface STCommunicationSafetyStateCoreAnalyticsEvent : NSObject
@property (nonatomic) BOOL communicationSafetyEnabled;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)name;
- (id)initWithCommunicationSafetyEnabled:;
- (BOOL)communicationSafetyEnabled;
+ (id)description;
@end
