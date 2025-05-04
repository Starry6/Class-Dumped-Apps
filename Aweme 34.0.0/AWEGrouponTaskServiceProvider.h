@interface AWEGrouponTaskServiceProvider : NSObject
@property (nonatomic) NSMutableDictionary serviceDict;
@property (nonatomic) BOOL enabled;
- (id)getTaskServiceWithPageType:;
- (id)init;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setServiceDict:;
- (id)serviceDict;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
