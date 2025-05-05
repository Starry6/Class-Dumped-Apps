@interface ICSuzeLeaseResponse : NSObject
@property (nonatomic) NSData clientData;
@property (nonatomic) NSDate leaseExpirationDate;
- (void).cxx_destruct;
- (id)clientData;
- (id)leaseExpirationDate;
- (id)initWithResponseDictionary:requestDate:;
@end
