@interface IMDHandleRecord : IMDRecord
@property (nonatomic) q rowID;
@property (nonatomic) NSString canonicalizedURIString;
@property (nonatomic) NSString uncanonicalizedURIString;
@property (nonatomic) NSString countryCodeString;
- (id)init;
- (long long)rowID;
- (unsigned long long)_cfTypeID;
- (id)_localCache;
- (id)_fetchUpdatedRecord;
- (id)_propertyDescriptorForProperty:;
- (int)_propertyIDForProperty:;
- (id)cfHandleRecord;
- (id)canonicalizedURIString;
- (id)uncanonicalizedURIString;
- (id)countryCodeString;
+ (id)allocWithZone:;
@end
