@interface ASDDiagnosticService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)addSubscriberWithEndpoint:;
- (id)activeClientsWithError:;
- (BOOL)pingWithError:;
- (BOOL)sendCommand:withError:;
- (id)sendDetailsCommand:withError:;
- (id)sendDetailsCommand:timeout:withError:;
+ (id)interface;
+ (id)defaultService;
@end
