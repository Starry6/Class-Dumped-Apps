@interface AWEListSliceModel : NSObject
@property (nonatomic) AWEBaseApiModel model;
@property (nonatomic) NSError error;
@property (nonatomic) q parseDuration;
- (void)setParseDuration:;
- (long long)parseDuration;
- (void)setModel:;
- (void)setError:;
- (id)model;
- (void).cxx_destruct;
- (id)error;
@end
