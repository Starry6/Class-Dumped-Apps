@interface AWEPOIDynamicTrackParamConfigModel : NSObject
@property (nonatomic) BOOL shouldDisableParams;
@property (nonatomic) q priorityToTrackParams;
@property (nonatomic) q priorityToSession;
@property (nonatomic) NSString paramName;
@property (nonatomic) NSDictionary rawData;
- (void)setParamName:;
- (id)paramName;
- (BOOL)shouldDisableParams;
- (void)setShouldDisableParams:;
- (long long)priorityToTrackParams;
- (void)setPriorityToTrackParams:;
- (long long)priorityToSession;
- (void)setPriorityToSession:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
- (id)initWithRawData:;
@end
