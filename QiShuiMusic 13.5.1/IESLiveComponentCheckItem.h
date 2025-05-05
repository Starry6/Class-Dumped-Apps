@interface IESLiveComponentCheckItem : NSObject
@property (nonatomic) NSString index;
@property (nonatomic) NSPointerArray items;
@property (nonatomic) @? checkComplete;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) BOOL checking;
- (id)checkComplete;
- (BOOL)checking;
- (void)deallocItem;
- (void)recordComponents:;
- (void)recordLiveObject:;
- (void)setCheckComplete:;
- (void)setChecking:;
- (void)setExtra:;
- (id)extra;
- (id)items;
- (id)index;
- (void)setItems:;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)check;
@end
