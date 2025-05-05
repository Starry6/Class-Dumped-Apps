@interface FPItemOperationLocator : FPActionOperationLocator
- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (BOOL)isFolder;
- (id)description;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isMaterializedOnDisk;
+ (BOOL)supportsSecureCoding;
@end
