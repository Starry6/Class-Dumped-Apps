@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue
@property (nonatomic) NSString firstTrackIdentifier;
@property (nonatomic) NSArray trackIdentifiers;
@property (nonatomic) q shuffleType;
@property (nonatomic) q repeatType;
@property (nonatomic) MPIdentifierSet collectionIdentifierSet;
- (long long)repeatType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)verifyWithError:;
- (long long)shuffleType;
- (id)initWithMediaRemotePlaybackQueue:options:;
- (id)firstTrackIdentifier;
- (id)trackIdentifiers;
- (id)collectionIdentifierSet;
+ (BOOL)supportsSecureCoding;
@end
