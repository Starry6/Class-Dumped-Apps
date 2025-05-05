@interface CSJDynamicSDKFlexiableInfoModel : NSObject
@property (nonatomic) double size;
@property (nonatomic) BOOL isFixed;
@property (nonatomic) double flexMaxSize;
- (void)setFlexMaxSize:;
- (double)flexMaxSize;
- (void)setIsFixed:;
- (void)setSize:;
- (id)copyWithZone:;
- (double)size;
- (BOOL)isFixed;
@end
