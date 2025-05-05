@interface CUIDesignColor : NSObject
@property (nonatomic) ^{CGColor=} cgColor;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) q displayGamut;
- (void)dealloc;
- (id)cgColor;
- (id)initWithColor:blendMode:displayGamut:;
- (int)blendMode;
- (long long)displayGamut;
@end
