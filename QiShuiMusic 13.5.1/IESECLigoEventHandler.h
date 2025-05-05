@interface IESECLigoEventHandler : NSObject
@property (nonatomic) NSMutableSet registeredEvents;
- (void)publishEvent:params:;
- (id)registeredEvents;
- (void)setRegisteredEvents:;
- (id)init;
- (void)registerEvent:;
- (void).cxx_destruct;
@end
