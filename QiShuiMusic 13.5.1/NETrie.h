@interface NETrie : NSObject
- (void)dealloc;
- (BOOL)searchWithString:;
- (id)initWithDomains:reverse:partialSearchAllowed:partialSearchTerminator:;
- (BOOL)search:length:;
@end
