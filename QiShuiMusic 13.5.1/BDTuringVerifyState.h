@interface BDTuringVerifyState : NSObject
@property (nonatomic) NSDictionary h5State;
@property (nonatomic) BOOL validated;
@property (nonatomic) NSString subType;
- (id)h5State;
- (void)setH5State:;
- (id)init;
- (void).cxx_destruct;
- (id)subType;
- (void)setSubType:;
- (BOOL)validated;
- (void)setValidated:;
@end
