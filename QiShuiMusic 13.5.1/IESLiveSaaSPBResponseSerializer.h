@interface IESLiveSaaSPBResponseSerializer : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseObjectForResponse:data:responseError:resultError:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)serializer;
@end
