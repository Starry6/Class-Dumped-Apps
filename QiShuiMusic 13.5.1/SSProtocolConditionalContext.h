@interface SSProtocolConditionalContext : NSObject
@property (nonatomic) @? itemLookupBlock;
@property (nonatomic) NSString platformName;
@property (nonatomic) NSString systemVersion;
- (void)dealloc;
- (id)systemVersion;
- (id)platformName;
- (id)copyWithZone:;
- (void)setSystemVersion:;
- (id)itemLookupBlock;
- (void)setItemLookupBlock:;
- (void)setPlatformName:;
@end
