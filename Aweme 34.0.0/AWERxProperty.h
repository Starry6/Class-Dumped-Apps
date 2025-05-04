@interface AWERxProperty : AWERxObservable
@property (nonatomic) @ data;
- (void)send:withContext:;
- (void)setValue:withContext:;
- (id)subscribeWithContext:syncImmediately:;
- (id)required:;
- (void)bind:initValue:;
- (id)subscribe:syncImmediately:;
- (void)send:;
- (id)rawValue;
- (id)initWithValue:;
- (void)setValue:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)distinctUntilChanged;
@end
