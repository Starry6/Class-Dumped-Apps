@interface BDTuringTwiceVerifyResponse : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSError error;
@property (nonatomic) Q type;
- (void)setError:;
- (void)setType:;
- (id)error;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
