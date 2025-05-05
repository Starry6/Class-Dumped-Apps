@interface IESECCombineList : NSObject
- (id)initWithObserver:target:keypath:;
- (void)p_AppendNewNode:;
- (void)subscribeNext:;
- (id)map:;
- (void).cxx_destruct;
- (id)ignore:;
- (id)distinctUntilChanged;
- (id)filter:;
- (id)skip:;
+ (id)createCombineListWithObserver:target:keypath:;
@end
