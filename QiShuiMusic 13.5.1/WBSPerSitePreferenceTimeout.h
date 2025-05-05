@interface WBSPerSitePreferenceTimeout : NSObject
@property (nonatomic) double interval;
@property (nonatomic) @ fallbackValue;
- (void).cxx_destruct;
- (double)interval;
- (id)initWithInterval:fallbackValue:;
- (id)fallbackValue;
+ (id)timeoutWithInterval:fallbackValue:;
@end
