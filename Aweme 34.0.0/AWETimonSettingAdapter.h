@interface AWETimonSettingAdapter : NSObject
@property (nonatomic) NSMutableArray blocks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (id)boolArrayForKey:;
- (id)floatArrayForKey:;
- (id)intArrayForKey:;
- (id)dictionaryArrayForKey:;
- (id)arrayArrayForKey:;
- (id)modelForKey:;
- (void)registerSettingUpdateHandler:;
- (id)init;
- (void)dealloc;
- (double)floatForKey:;
- (id)stringForKey:;
- (id)dictionaryForKey:;
- (void).cxx_destruct;
- (void)setBlocks:;
- (BOOL)boolForKey:;
- (id)blocks;
- (id)stringArrayForKey:;
- (long long)intForKey:;
@end
