@interface PLFileSystemImportAsset : NSObject
@property (nonatomic) NSObject<PLAlbumProtocol> destinationAlbum;
@property (nonatomic) NSInteger assetKind;
@property (nonatomic) NSSet urls;
@property (nonatomic) PLAssetJournalEntryPayload assetPayload;
@property (nonatomic) BOOL isInterruptedLockedResourceTransfer;
@property (nonatomic) NSURL lockedResourceTransferMarkerFileURL;
@property (nonatomic) PLLockedResourceTransferRecovery lockedResourceTransferRecovery;
- (id)urls;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (int)assetKind;
- (void)setAssetKind:;
- (id)destinationAlbum;
- (void)setDestinationAlbum:;
- (id)initWithDestinationAlbum:assetKind:;
- (id)initWithAssetPayload:;
- (BOOL)isCameraKit;
- (void)addURL:;
- (void)addURLs:;
- (BOOL)isInterruptedLockedResourceTransfer;
- (id)assetPayload;
- (id)lockedResourceTransferMarkerFileURL;
- (id)lockedResourceTransferRecovery;
- (void)setLockedResourceTransferRecovery:;
@end
