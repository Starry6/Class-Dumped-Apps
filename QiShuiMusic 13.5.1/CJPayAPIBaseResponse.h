@interface CJPayAPIBaseResponse : NSObject
@property (nonatomic) q scene;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary data;
- (void)setScene:;
- (id)data;
- (void)setError:;
- (id)error;
- (long long)scene;
- (void).cxx_destruct;
- (void)setData:;
@end
