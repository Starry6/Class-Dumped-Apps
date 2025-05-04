@interface AWEPaySwiftImpl.TripBridgeTtcjpayTripMethod : BDXBridgeMethod
@property (nonatomic) NSString methodName;
@property (nonatomic) q authType;
@property (nonatomic) # paramModelClass;
@property (nonatomic) # resultModelClass;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)initWithCallHandler:;
- (Class)resultModelClass;
- (id)init;
- (long long)authType;
- (id)initWithContext:;
- (id)methodName;
@end
