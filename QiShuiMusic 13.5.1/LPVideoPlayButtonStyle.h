@interface LPVideoPlayButtonStyle : NSObject
@property (nonatomic) LPSize size;
@property (nonatomic) LPSize backgroundSize;
@property (nonatomic) double disabledOpacity;
- (id)initWithPlatform:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
- (id)backgroundSize;
- (void)setBackgroundSize:;
- (double)disabledOpacity;
- (void)setDisabledOpacity:;
@end
