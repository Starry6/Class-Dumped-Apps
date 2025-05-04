@interface AWENearbyGeneralShowActionModel : MTLModel
@property (nonatomic) Q actionType;
@property (nonatomic) NSString actionParam;
@property (nonatomic) NSNumber pollingLimit;
@property (nonatomic) NSNumber pollingInterval;
@property (nonatomic) NSString actionApiUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pollingLimit;
- (void)setPollingLimit:;
- (id)actionParam;
- (void)setActionParam:;
- (id)actionApiUrl;
- (void)setActionApiUrl:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)pollingInterval;
- (void)setPollingInterval:;
+ (BOOL)automaticallyDefaultMapping;
@end
