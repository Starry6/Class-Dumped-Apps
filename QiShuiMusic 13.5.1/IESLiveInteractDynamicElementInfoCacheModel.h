@interface IESLiveInteractDynamicElementInfoCacheModel : NSObject
@property (nonatomic) NSMutableDictionary elementInfos;
- (id)elementInfos;
- (void)removeWithCacheItems:;
- (void)setElementInfos:;
- (id)updateValueWithItemId:params:;
- (void).cxx_destruct;
+ (id)elementModelClass;
@end
