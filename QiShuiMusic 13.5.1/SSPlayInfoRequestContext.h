@interface SSPlayInfoRequestContext : NSObject
@property (nonatomic) NSString playerGUID;
@property (nonatomic) NSData SICData;
@property (nonatomic) NSArray sinfs;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber contentIdentifier;
@property (nonatomic) NSString playbackType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)playbackType;
- (void)dealloc;
- (id)contentIdentifier;
- (id)copyXPCEncoding;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void)setContentIdentifier:;
- (id)copyWithZone:;
- (void)setPlayerGUID:;
- (void)setSinfs:;
- (void)setSICData:;
- (id)sinfs;
- (id)playerGUID;
- (id)SICData;
- (void)setPlaybackType:;
@end
