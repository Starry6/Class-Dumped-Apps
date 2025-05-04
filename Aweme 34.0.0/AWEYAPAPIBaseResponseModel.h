@interface AWEYAPAPIBaseResponseModel : NSObject
@property (nonatomic) q scene;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary data;
- (void)setScene:;
- (long long)scene;
- (void)setError:;
- (void)setData:;
- (void).cxx_destruct;
- (id)error;
- (id)data;
@end
