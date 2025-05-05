@interface VEVideoAnimation : NSObject
@property (nonatomic) IESMMCanvasAnimatedInfo animatedInfo;
@property (nonatomic) NSString blendMode;
- (id)animatedInfo;
- (void)setAnimatedInfo:;
- (id)init;
- (void)setBlendMode:;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)blendMode;
- (id)copyWithZone:;
- (id)toDict;
@end
