@interface AWESearchComponentBasicModel : NSObject
@property (nonatomic) NSDictionary logData;
@property (nonatomic) NSDictionary extraLogData;
@property (nonatomic) NSArray disableEvent;
- (void)setDisableEvent:;
- (id)extraLogData;
- (void)setExtraLogData:;
- (id)disableEvent;
- (BOOL)isAvailable;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
