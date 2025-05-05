@interface MPModelLibrarySDKAddToPlaylistChangeRequest : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) BOOL isCloudID;
@property (nonatomic) MPModelPlaylist playlist;
@property (nonatomic) @? completionHandler;
- (id)productID;
- (id)newOperationWithResponseHandler:;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)completionHandler;
- (id)playlist;
- (void)setPlaylist:;
- (id)initWithProductID:isCloudID:playlist:completionHandler:;
- (BOOL)isCloudID;
@end
