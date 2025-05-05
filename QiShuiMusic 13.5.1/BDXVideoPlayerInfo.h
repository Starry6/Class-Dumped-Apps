@interface BDXVideoPlayerInfo : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) double reservedTime;
- (double)reservedTime;
- (void)setReservedTime:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
+ (id)playerInfoWithKey:;
@end
