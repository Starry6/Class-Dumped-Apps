@interface CPLFileStorageItem : NSObject
@property (nonatomic) CPLResourceIdentity identity;
@property (nonatomic) BOOL original;
@property (nonatomic) BOOL markedForDelete;
@property (nonatomic) NSDate lastAccessDate;
- (id)identity;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)getResourceValue:forKey:error:;
- (id)lastAccessDate;
- (id)initWithIdentity:original:markedForDelete:lastAccessDate:;
- (BOOL)isOriginal;
- (BOOL)isMarkedForDelete;
@end
