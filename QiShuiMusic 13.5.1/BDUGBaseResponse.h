@interface BDUGBaseResponse : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) @ jsonObj;
@property (nonatomic) BOOL success;
- (id)jsonObj;
- (void)setJsonObj:;
- (void)setError:;
- (id)error;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
@end
