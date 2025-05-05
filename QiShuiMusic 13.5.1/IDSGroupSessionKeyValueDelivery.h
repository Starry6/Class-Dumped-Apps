@interface IDSGroupSessionKeyValueDelivery : NSObject
- (id)initWithSessionID:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)_setUpXPC;
- (void)addDeliveryHandler:;
- (void)removeDeliveryHandler:;
- (void)sendData:forKey:encryption:capability:;
- (void)sendData:forKey:encryption:capability:completionHandler:;
- (void)test_receiveData:forKey:fromParticipant:;
+ (BOOL)supportsSecureCoding;
@end
