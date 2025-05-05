@interface WebUserContentURLPattern : NSObject
- (void)dealloc;
- (id)scheme;
- (id)host;
- (BOOL)isValid;
- (BOOL)matchesURL:;
- (id)initWithPatternString:;
- (BOOL)matchesSubdomains;
@end
