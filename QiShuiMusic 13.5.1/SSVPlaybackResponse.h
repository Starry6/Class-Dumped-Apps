@interface SSVPlaybackResponse : NSObject
@property (nonatomic) NSURL fallbackStreamingKeyServerURL;
@property (nonatomic) NSURL fallbackStreamingKeyCertificateURL;
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSHTTPURLResponse URLResponse;
@property (nonatomic) NSArray items;
- (id)responseDictionary;
- (void)_enumerateItemsUsingBlock:;
- (id)items;
- (void).cxx_destruct;
- (id)URLResponse;
- (id)copyWithZone:;
- (id)initWithDictionary:URLResponse:;
- (id)itemForItemIdentifier:;
- (id)fallbackStreamingKeyServerURL;
- (void)setFallbackStreamingKeyServerURL:;
- (id)fallbackStreamingKeyCertificateURL;
- (void)setFallbackStreamingKeyCertificateURL:;
@end
