@interface CNGeminiInteraction : NSObject
@property (nonatomic) q transport;
@property (nonatomic) q directionality;
@property (nonatomic) NSString handle;
@property (nonatomic) NSString contactIdentifier;
- (long long)transport;
- (id)contactIdentifier;
- (id)handle;
- (long long)directionality;
- (void).cxx_destruct;
- (id)initWithTransport:directionality:destinationHandle:;
- (id)initWithTransport:directionality:destinationHandle:destinationContactIdentifier:;
@end
