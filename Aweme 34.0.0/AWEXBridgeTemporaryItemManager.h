@interface AWEXBridgeTemporaryItemManager : NSObject
@property (nonatomic) NSMutableDictionary temporaryNativeDict;
- (id)temporaryNativeDict;
- (void)setTemporaryObject:forkey:;
- (id)getTemporaryObjectForkey:;
- (void)setTemporaryNativeDict:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
