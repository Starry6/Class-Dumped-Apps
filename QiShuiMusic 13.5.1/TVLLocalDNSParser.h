@interface TVLLocalDNSParser : TVLBaseDNSParser
@property (nonatomic) BOOL resolutionSucceeded;
@property (nonatomic) BOOL canceled;
- (BOOL)isResolutionSucceeded;
- (void)parseHostname;
- (id)resolvedAddressesWithAddressArrayRef:;
- (void)setResolutionSucceeded:;
- (BOOL)isCanceled;
- (void)cancel;
- (void)start;
- (void)setCanceled:;
- (id)initWithHostname:;
@end
