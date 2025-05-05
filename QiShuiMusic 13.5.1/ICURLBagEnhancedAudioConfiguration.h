@interface ICURLBagEnhancedAudioConfiguration : NSObject
@property (nonatomic) NSDictionary bagEnhancedAudioDictionary;
@property (nonatomic) NSURL certificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) NSArray prefetchSKDs;
- (id)initWithBagEnhancedAudioDictionary:;
- (void).cxx_destruct;
- (id)_urlForBagEnhancedAudioKey:;
- (void)setBagEnhancedAudioDictionary:;
- (id)certificateURL;
- (id)bagEnhancedAudioDictionary;
- (id)prefetchSKDs;
- (id)keyServerURL;
@end
