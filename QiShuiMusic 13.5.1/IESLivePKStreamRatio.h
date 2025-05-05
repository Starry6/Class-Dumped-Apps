@interface IESLivePKStreamRatio : NSObject
@property (nonatomic) NSNumber topRatio;
@property (nonatomic) NSNumber heightPercent;
@property (nonatomic) NSNumber widthHeightRatio;
@property (nonatomic) NSString backgroundColor;
- (void)setTopRatio:;
- (void)setWidthHeightRatio:;
- (id)topRatio;
- (id)widthHeightRatio;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)heightPercent;
- (void)setHeightPercent:;
@end
