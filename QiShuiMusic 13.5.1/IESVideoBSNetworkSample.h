@interface IESVideoBSNetworkSample : NSObject
@property (nonatomic) Q weight;
@property (nonatomic) double speed;
- (unsigned long long)weight;
- (void)setSpeed:;
- (void)setWeight:;
- (double)speed;
- (id)description;
@end
