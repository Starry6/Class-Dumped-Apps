@interface ISDropShaddowEffect : NSObject
@property (nonatomic) double scale;
@property (nonatomic) {CGSize=dd} offset;
@property (nonatomic) double blur;
@property (nonatomic) double spread;
@property (nonatomic) IFColor color;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOffset:;
- (id)init;
- (void)setScale:;
- (void)setColor:;
- (id)offset;
- (id)color;
- (void)setBlur:;
- (void).cxx_destruct;
- (double)blur;
- (double)scale;
- (double)spread;
- (void)setSpread:;
- (id)filterWithBackgroundImage:inputImage:;
@end
