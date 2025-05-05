@interface TRILockedFactorPackSet : NSObject
@property (nonatomic) NSString<TRIFactorPackSetId> factorPackSetId;
@property (nonatomic) NSString path;
@property (nonatomic) TRIReferenceManagedDirReaderLock lock;
- (id)path;
- (id)init;
- (BOOL)isEqualToLockedSet:;
- (unsigned long long)hash;
- (id)lock;
- (id)factorPackSetId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFactorPackSetId:path:lock:;
- (id)copyWithReplacementLock:;
- (id)copyWithReplacementPath:;
- (id)copyWithReplacementFactorPackSetId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)lockedSetWithFactorPackSetId:path:lock:;
@end
