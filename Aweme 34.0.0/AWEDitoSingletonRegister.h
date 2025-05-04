@interface AWEDitoSingletonRegister : NSObject
@property (nonatomic) NSMutableDictionary subTabPagesDict;
- (id)subTabPagesDict;
- (void)registerDitoSubTabPageWithClassName:forPageKey:;
- (id)subTabPageNameWithPageKey:;
- (void)setSubTabPagesDict:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
