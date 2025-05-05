@interface MFDataHolder : NSObject
@property (nonatomic) Q length;
- (id)init;
- (id)data;
- (id)initWithData:;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)enumerateByteRangesUsingBlock:;
- (void)addData:;
- (unsigned long long)numberOfNewlinesNeedingConversion:;
- (void)enumerateConvertingNewlinesUsingBlock:;
- (void)enumerateDatasUsingBlock:;
+ (id)dataHolderWithData:;
+ (id)dataHolder;
@end
