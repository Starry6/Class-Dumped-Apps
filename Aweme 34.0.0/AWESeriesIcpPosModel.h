@interface AWESeriesIcpPosModel : AWEBaseApiModel
@property (nonatomic) q xPos;
@property (nonatomic) q yPos;
- (long long)xPos;
- (void)setXPos:;
- (long long)yPos;
- (void)setYPos:;
+ (id)JSONKeyPathsByPropertyKey;
@end
