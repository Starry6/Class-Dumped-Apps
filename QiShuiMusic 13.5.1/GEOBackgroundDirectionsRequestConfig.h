@interface GEOBackgroundDirectionsRequestConfig : GEODirectionsRequestConfig
- (BOOL)usesBackgroundURL;
- (unsigned long long)urlType;
- (id)initWithRequest:requestPriority:;
@end
