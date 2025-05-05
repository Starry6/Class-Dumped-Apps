@interface CKDistributedTimestampProxy : CKXStructProxyBase
@property (nonatomic) Q size;
- (unsigned char)modifier;
- (unsigned long long)clock;
- (id)timestamp;
- (unsigned long long)size;
- (id)siteIdentifier;
- (BOOL)unordered;
- (id)distributedSiteIdentifier;
- (unsigned long long)siteIdentifierSize;
- (void)copySiteIdentifierBytes:length:isNull:;
@end
