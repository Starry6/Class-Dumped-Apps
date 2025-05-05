@interface WebAVStreamDataParserListener : NSObject
@property (nonatomic) ^v parent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setParent:;
- (void)dealloc;
- (void)invalidate;
- (id)parent;
- (void)streamDataParser:didFailToParseStreamDataWithError:;
- (void)streamDataParser:didParseStreamDataAsAsset:withDiscontinuity:;
- (void)streamDataParser:didProvideMediaData:forTrackID:mediaType:flags:;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:forTrackID:;
- (void)streamDataParser:didProvideContentKeyRequestInitializationData:forTrackID:;
- (id)initWithParser:parent:;
- (void)streamDataParser:didParseStreamDataAsAsset:;
@end
