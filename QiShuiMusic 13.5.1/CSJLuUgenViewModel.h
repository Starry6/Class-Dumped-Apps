@interface CSJLuUgenViewModel : CSJUgenViewModel
@property (nonatomic) q currentOffset;
- (BOOL)luHasMoreData;
- (void)override_loadDataWithCompletion:;
- (void)override_resetInfo;
- (id)override_ugenDataDict;
- (id)preSearchId;
- (long long)currentOffset;
- (void)setCurrentOffset:;
@end
