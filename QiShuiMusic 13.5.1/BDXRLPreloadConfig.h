@interface BDXRLPreloadConfig : NSObject
@property (nonatomic) NSString bulletSchema;
@property (nonatomic) BOOL manualTrigger;
@property (nonatomic) NSArray preloadItems;
@property (nonatomic) BDXPreloadStrategy strategy;
- (id)bulletSchema;
- (id)initWith:strategy:;
- (BOOL)manualTrigger;
- (id)preloadItems;
- (void)setBulletSchema:;
- (void)setManualTrigger:;
- (void)setPreloadItems:;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
+ (id)createPreloadItemWith:strategy:;
+ (id)createGurdPreloadItemsWith:strategy:;
+ (unsigned long long)itemTypeWithString:;
+ (id)tryConvertFrom:strategy:;
@end
