@interface WebArchive : NSObject
@property (nonatomic) WebResource mainResource;
@property (nonatomic) NSArray subresources;
@property (nonatomic) NSArray subframeArchives;
@property (nonatomic) NSData data;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (id)copyWithZone:;
- (id)initWithMainResource:subresources:subframeArchives:;
- (id)subresources;
- (id)mainResource;
- (id)subframeArchives;
- (id)_initWithCoreLegacyWebArchive:;
- (id)_coreLegacyWebArchive;
+ (id)bundleForClass;
@end
