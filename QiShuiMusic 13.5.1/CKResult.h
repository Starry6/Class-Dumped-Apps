@interface CKResult : NSObject
@property (nonatomic) @ successValue;
@property (nonatomic) NSError error;
- (id)error;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSuccess:;
- (BOOL)isEqual:;
- (id)initWithFailure:;
- (id)successValue;
@end
