@interface MPModelPlayEvent : MPModelObject
@property (nonatomic) NSString title;
@property (nonatomic) NSDate datePlayed;
@property (nonatomic) NSString featureName;
@property (nonatomic) MPModelAlbum album;
@property (nonatomic) MPModelArtist artist;
@property (nonatomic) MPModelPlaylist playlist;
@property (nonatomic) MPModelRadioStation radioStation;
@property (nonatomic) MPModelGroup group;
- (long long)itemType;
- (id)title;
- (id)genericObjectRepresentation;
- (id)contentItemCollectionInfo;
+ (id)__playlist_KEY;
+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__radioStation_KEY;
+ (id)__datePlayed_KEY;
+ (id)__featureName_KEY;
+ (id)__group_KEY;
+ (id)playEventWithModelObject:featureName:;
@end
