@interface TTClientCertificate : NSObject
@property (nonatomic) NSArray HostsList;
@property (nonatomic) NSData Certificate;
@property (nonatomic) NSData PrivateKey;
@property (nonatomic) ^v AlgorithmPreferAddr;
@property (nonatomic) ^v SignAddr;
- (id)HostsList;
- (id)PrivateKey;
- (id)AlgorithmPreferAddr;
- (id)Certificate;
- (id)SignAddr;
- (void)setAlgorithmPreferAddr:;
- (void)setHostsList:;
- (void)setSignAddr:;
- (void)setPrivateKey:;
- (void).cxx_destruct;
- (void)setCertificate:;
@end
