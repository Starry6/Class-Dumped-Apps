@interface FIFolderSize : NSObject
@property (nonatomic) q totalItems;
@property (nonatomic) q userVisibleItems;
@property (nonatomic) q logicalBytes;
@property (nonatomic) q compressionAdjustedLogicalBytes;
@property (nonatomic) q physicalBytes;
@property (nonatomic) q skippedItemCount;
@property (nonatomic) q folderCount;
@property (nonatomic) NSError error;
- (id)error;
- (void).cxx_destruct;
- (long long)folderCount;
- (long long)totalItems;
- (long long)userVisibleItems;
- (long long)logicalBytes;
- (long long)compressionAdjustedLogicalBytes;
- (long long)physicalBytes;
- (long long)skippedItemCount;
@end
