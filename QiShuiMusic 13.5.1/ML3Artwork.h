@interface ML3Artwork : NSObject
@property (nonatomic) ML3MusicLibrary musicLibrary;
@property (nonatomic) NSString artworkToken;
@property (nonatomic) q artworkType;
@property (nonatomic) q sourceType;
@property (nonatomic) NSString relativePath;
@property (nonatomic) NSDictionary interestDictionary;
@property (nonatomic) NSURL originalFileURL;
- (long long)sourceType;
- (unsigned long long)hash;
- (id)relativePath;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (long long)artworkType;
- (id)interestDictionary;
- (void)setInterestDictionary:;
- (id)fileURLForEffect:;
- (id)fileURLForSize:;
- (id)initWithToken:artworkType:musicLibrary:;
- (id)musicLibrary;
- (id)originalFileURL;
- (id)initWithToken:relativePath:artworkType:musicLibrary:;
- (void)_onSerialQueue_faultInProperties;
- (id)_interestDictionaryFromInterestData:;
- (id)_interestDataFromInterestDictionary:;
- (id)artworkToken;
@end
