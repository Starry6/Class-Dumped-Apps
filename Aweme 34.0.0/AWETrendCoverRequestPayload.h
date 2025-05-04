@interface AWETrendCoverRequestPayload : NSObject
@property (nonatomic) q index;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSError error;
@property (nonatomic) double duration;
- (void)setIndex:;
- (void)setModel:;
- (long long)index;
- (void)setError:;
- (void)setDuration:;
- (id)model;
- (void).cxx_destruct;
- (id)error;
- (double)duration;
@end
