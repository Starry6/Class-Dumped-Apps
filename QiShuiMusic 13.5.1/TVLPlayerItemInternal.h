@interface TVLPlayerItemInternal : NSObject
@property (nonatomic) TVLPlayerItemPreferences preferences;
@property (nonatomic) NSArray supportedPreferences;
@property (nonatomic) NSURL currentURL;
@property (nonatomic) NSString URI;
@property (nonatomic) BOOL fallbackWithoutSetResolution;
- (id)URLWithPreferences:;
- (void)fallbackPreferences:;
- (BOOL)fallbackWithoutSetResolution;
- (void)requestItemInfoWithCompletion:;
- (id)init;
- (void)cancel;
@end
