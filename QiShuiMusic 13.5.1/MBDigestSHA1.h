@interface MBDigestSHA1 : MBDigest
- (id)init;
- (void)updateWithBytes:length:;
- (id)final;
- (void)finalWithBytes:length:;
@end
