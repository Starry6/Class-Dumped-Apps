@interface CBWriteRequest : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) BOOL endOfData;
@property (nonatomic) NSError error;
- (id)completion;
- (void)setCompletion:;
- (id)error;
- (void).cxx_destruct;
- (id)dataArray;
- (void)setDataArray:;
- (BOOL)endOfData;
- (void)setEndOfData:;
@end
