@interface HSNowPlayingArtworkRequest : HSRequest
@property (nonatomic) I interfaceID;
@property (nonatomic) {CGSize=dd} maximumSize;
@property (nonatomic) I playQueueIndex;
- (id)maximumSize;
- (unsigned int)interfaceID;
- (id)canonicalResponseForResponse:;
- (id)initWithInterfaceID:maximumSize:playQueueIndex:;
- (unsigned int)playQueueIndex;
@end
