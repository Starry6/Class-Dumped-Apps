@interface WBWebsiteDataRecord : NSObject
@property (nonatomic) NSObject<OS_xpc_object> XPCDictionaryRepresentation;
@property (nonatomic) NSString domain;
@property (nonatomic) Q usage;
- (unsigned long long)usage;
- (id)_initWithDomain:;
- (void).cxx_destruct;
- (void)setUsage:;
- (id)domain;
- (id)XPCDictionaryRepresentation;
- (id)_initWithDomain:usage:;
+ (id)websiteDataRecordWithDomain:;
+ (id)websiteDataRecordFromXPCDictionary:;
@end
