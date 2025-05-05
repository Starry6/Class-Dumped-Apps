@interface MLMovieArtist : NSObject
@property (nonatomic) NSString artistName;
@property (nonatomic) NSNumber ITunesStoreIdentifier;
- (id)artistName;
- (void)_setValue:forKey:;
- (id)init;
- (void)setArtistName:;
- (void).cxx_destruct;
- (void)setITunesStoreIdentifier:;
- (id)copyWithZone:;
- (id)ITunesStoreIdentifier;
- (void)_setValueCopy:forKey:;
- (id)initWithMovieArtistDictionary:;
- (id)copyMovieArtistDictionary;
@end
