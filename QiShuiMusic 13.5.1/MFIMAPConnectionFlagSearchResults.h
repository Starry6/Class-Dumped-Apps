@interface MFIMAPConnectionFlagSearchResults : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_flagsForUID:;
- (id)_indexSetFromUIDs:;
- (void)cacheStateForUIDs:mask:existenceSetsFlag:;
- (id)copyResponseForUID:;
@end
