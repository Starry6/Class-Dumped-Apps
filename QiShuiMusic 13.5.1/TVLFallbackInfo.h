@interface TVLFallbackInfo : NSObject
@property (nonatomic) TVLPlayerItemPreferences originalPreferences;
@property (nonatomic) TVLPlayerItemPreferences fallbackPreferences;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL shouldIgnoreSuggestedFormatType;
@property (nonatomic) BOOL shouldIgnoreSuggestedProtocolType;
- (BOOL)shouldIgnoreSuggestedFormatType;
- (id)fallbackPreferences;
- (id)initWithError:originalPreferences:fallbackPreferences:;
- (id)originalPreferences;
- (void)setFallbackPreferences:;
- (void)setOriginalPreferences:;
- (BOOL)shouldIgnoreSuggestedProtocolType;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)description;
+ (id)fallbackInfoWithError:originalPreferences:fallbackPreferences:;
@end
