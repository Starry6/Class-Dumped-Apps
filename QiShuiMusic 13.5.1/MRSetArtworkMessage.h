@interface MRSetArtworkMessage : MRProtocolMessage
@property (nonatomic) NSData artworkData;
- (id)artworkData;
- (unsigned long long)type;
- (id)initWithArtworkData:;
@end
