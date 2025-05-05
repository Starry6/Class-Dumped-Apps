@interface CUIPSDLayer : NSObject
@property (nonatomic) double opacity;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) NSString name;
- (void)setOpacity:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (double)opacity;
- (void)setBlendMode:;
- (int)blendMode;
- (id)name;
@end
