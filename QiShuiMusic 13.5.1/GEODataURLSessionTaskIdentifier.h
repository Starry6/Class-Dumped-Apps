@interface GEODataURLSessionTaskIdentifier : NSObject
- (id)initWithSession:task:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
