@interface BXFeatureConcernEventOC : NSObject
@property (nonatomic) NSString sessionName;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSArray params;
- (void)setSessionName:;
- (id)sessionName;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
