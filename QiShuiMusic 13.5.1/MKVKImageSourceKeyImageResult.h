@interface MKVKImageSourceKeyImageResult : NSObject
@property (nonatomic) NSMutableArray triedKeys;
@property (nonatomic) NSMutableArray mutableImages;
@property (nonatomic) NSMutableSet imageDatas;
@property (nonatomic) MKVKImageSourceCalculationParameters parameters;
@property (nonatomic) NSArray fullBleedColors;
@property (nonatomic) BOOL sameFullBleedColors;
@property (nonatomic) NSArray images;
- (id)initWithParameters:;
- (id)images;
- (id)parameters;
- (void).cxx_destruct;
- (id)fullBleedColors;
- (void)addFullBleedColor:;
- (BOOL)hasSameFullBleedColors;
- (id)triedKeys;
- (void)setTriedKeys:;
- (id)mutableImages;
- (void)setMutableImages:;
- (id)imageDatas;
- (void)setImageDatas:;
@end
