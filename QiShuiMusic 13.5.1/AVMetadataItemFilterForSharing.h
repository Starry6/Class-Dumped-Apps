@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter
- (id)whitelist;
+ (void)addKeySpace:key:toWhitelistDictionary:;
+ (void)addIdentifier:toWhitelistDictionary:;
@end
