@interface ABUInvalidNonServerBiddingResult : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString slotID;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString logSource;
@property (nonatomic) NSDictionary dictValue;
- (id)dictValue;
- (id)errorMsg;
- (long long)errorCode;
- (id)slotID;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)name;
- (id)logSource;
@end
