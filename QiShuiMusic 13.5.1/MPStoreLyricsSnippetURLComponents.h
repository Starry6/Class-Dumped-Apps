@interface MPStoreLyricsSnippetURLComponents : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q songAdamID;
@property (nonatomic) NSString language;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString signature;
- (id)countryCode;
- (id)signature;
- (id)initWithURL:;
- (id)language;
- (double)startTime;
- (double)endTime;
- (void).cxx_destruct;
- (long long)songAdamID;
- (id)initWithSong:language:startTime:endTime:;
- (void)URLWithAdditionalParameters:completion:;
- (id)signatureWithCountryCode:adamID:startTime:endTime:language:;
@end
