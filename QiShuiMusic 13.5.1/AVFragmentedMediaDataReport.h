@interface AVFragmentedMediaDataReport : NSObject
@property (nonatomic) q numberOfBytesToEndOfFirstVideoFrame;
- (id)init;
- (void)dealloc;
- (id)initWithFigFragmentedMediaDataReportDictionary:;
- (long long)numberOfBytesToEndOfFirstVideoFrame;
@end
