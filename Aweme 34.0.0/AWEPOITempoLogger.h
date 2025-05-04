@interface AWEPOITempoLogger : NSObject
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (void)setCommonParams:;
- (void)logWithLog:;
- (void)logMessageWithMessage:;
- (void)logLoadResultWithStatus:url:metrics:;
- (void)updateCommonParamsWithParams:;
- (void).cxx_destruct;
@end
