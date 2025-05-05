@interface VSFileWriteOperation : VSAsyncOperation
@property (nonatomic) NSError error;
@property (nonatomic) VSOptional data;
@property (nonatomic) VSOptional destination;
- (void)setDestination:;
- (void)executionDidBegin;
- (id)init;
- (id)data;
- (void)setError:;
- (id)destination;
- (id)error;
- (void).cxx_destruct;
- (void)setData:;
@end
