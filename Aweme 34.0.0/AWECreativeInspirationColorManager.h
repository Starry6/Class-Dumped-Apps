@interface AWECreativeInspirationColorManager : NSObject
@property (nonatomic) NSMutableDictionary colorDictionary;
- (id)colorForKey:;
- (void)addColorForKey:color:;
- (id)colorDictionary;
- (void)setColorDictionary:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
