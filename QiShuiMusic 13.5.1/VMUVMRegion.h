@interface VMUVMRegion : NSObject
- (id)path;
- (unsigned int)maxProtection;
- (id)init;
- (BOOL)isSubmap;
- (void)addInfoFromRegion:;
- (id)initWithVMRegionData:encodedVersion:simpleSerializer:error:;
- (id)descriptionWithOptions:maximumLength:memorySizeDivisor:hasFractionalPageSizes:;
- (unsigned long long)dirtyLength;
- (id)descriptionWithOptions:maximumLength:;
- (unsigned int)protection;
- (id)breakAtLength:;
- (id)range;
- (id)type;
- (BOOL)isNullRegion;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)address;
- (unsigned long long)length;
- (BOOL)isWired;
- (BOOL)hasSameInfoAsRegion:;
- (void)setVMRegionDataExtra:;
- (void)getVMRegionDataExtra:;
- (BOOL)isEqual:;
- (void)getVMRegionData:withSimpleSerializer:;
+ (id)columnHeadersWithOptions:maximumLength:memorySizeDivisor:hasFractionalPageSizes:;
+ (id)columnHeadersWithOptions:maximumLength:;
@end
