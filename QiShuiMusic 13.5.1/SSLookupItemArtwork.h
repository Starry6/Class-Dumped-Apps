@interface SSLookupItemArtwork : NSObject
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSURL URL;
- (void)dealloc;
- (id)lookupDictionary;
- (long long)height;
- (long long)width;
- (id)initWithLookupDictionary:;
- (id)URL;
- (id)URLWithHeight:width:cropStyle:format:;
- (BOOL)getRed:green:blue:alpha:forColorKind:;
- (id)URLWithHeight:width:;
- (id)URLWithHeight:width:format:;
@end
