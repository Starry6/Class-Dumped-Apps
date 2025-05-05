@interface CSJDynamicAdSizeModel : NSObject
@property (nonatomic) q height;
@property (nonatomic) q isLandscape;
@property (nonatomic) q width;
@property (nonatomic) {CGSize=dd} splashFixedSize;
- (id)splashFixedSize;
- (void)setSplashFixedSize:;
- (id)initWithDictionary:;
- (long long)isLandscape;
- (void)setWidth:;
- (void)setIsLandscape:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
@end
