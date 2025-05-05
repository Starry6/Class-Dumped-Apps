@interface WebAVAssetWriterDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)close;
- (id)initWithWriter:;
- (void)assetWriter:didProduceFragmentedHeaderData:;
- (void)assetWriter:didProduceFragmentedMediaData:fragmentedMediaDataReport:;
@end
