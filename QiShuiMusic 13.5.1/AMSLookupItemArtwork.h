@interface AMSLookupItemArtwork : NSObject
@property (nonatomic) NSDictionary artworkDictionary;
@property (nonatomic) double height;
@property (nonatomic) NSString URLString;
@property (nonatomic) double width;
- (id)URLString;
- (double)height;
- (double)width;
- (void).cxx_destruct;
- (id)initWithArtworkDictionary:;
- (id)colorWithKind:;
- (id)URLWithHeight:width:cropStyle:format:;
- (id)artworkDictionary;
@end
