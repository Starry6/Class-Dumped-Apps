@interface MPStoreItemMetadata : NSObject
@property (nonatomic) NSString cacheableItemIdentifier;
@property (nonatomic) MPStoreItemMetadata parentStoreItemMetadata;
@property (nonatomic) NSString artistName;
@property (nonatomic) MPStoreArtworkRequestToken artworkRequestToken;
@property (nonatomic) MPStoreArtworkRequestToken stationGlyphRequestToken;
@property (nonatomic) @ artistStoreID;
@property (nonatomic) NSArray artworkTrackIDs;
@property (nonatomic) NSString artistUploadedContentType;
@property (nonatomic) BOOL beats1;
@property (nonatomic) NSArray childrenStoreIDs;
@property (nonatomic) NSArray childStoreItemMetadatas;
@property (nonatomic) NSString cloudAlbumID;
@property (nonatomic) Q cloudID;
@property (nonatomic) NSString collectionName;
@property (nonatomic) @ collectionStoreID;
@property (nonatomic) BOOL compilation;
@property (nonatomic) NSString composerName;
@property (nonatomic) NSString copyrightText;
@property (nonatomic) NSString curatorName;
@property (nonatomic) NSString curatorHandle;
@property (nonatomic) @ curatorID;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString shortDescriptionText;
@property (nonatomic) q discCount;
@property (nonatomic) q discNumber;
@property (nonatomic) double duration;
@property (nonatomic) NSString editorNotes;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
@property (nonatomic) NSString shortEditorNotes;
@property (nonatomic) NSDictionary effectiveStorePlatformDictionary;
@property (nonatomic) NSDictionary importableStorePlatformDictionary;
@property (nonatomic) BOOL explicitContent;
@property (nonatomic) q explicitRating;
@property (nonatomic) BOOL hasArtistBiography;
@property (nonatomic) BOOL hasLyrics;
@property (nonatomic) BOOL hasTimeSyncedLyrics;
@property (nonatomic) BOOL hasSocialPosts;
@property (nonatomic) BOOL hasSubscriptionOffer;
@property (nonatomic) NSArray genreNames;
@property (nonatomic) BOOL isPreorder;
@property (nonatomic) NSString itemKind;
@property (nonatomic) NSString playlistType;
@property (nonatomic) NSString personalMixSortKey;
@property (nonatomic) NSString iTunesBrandType;
@property (nonatomic) BOOL masteredForiTunes;
@property (nonatomic) NSArray audioTraits;
@property (nonatomic) MPStoreArtworkRequestToken latestAlbumArtworkRequestToken;
@property (nonatomic) q movementCount;
@property (nonatomic) NSString movementName;
@property (nonatomic) q movementNumber;
@property (nonatomic) q movieClipsCount;
@property (nonatomic) NSArray movieClips;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray offers;
@property (nonatomic) NSArray playlistIdentifiers;
@property (nonatomic) NSNumber popularity;
@property (nonatomic) NSDate releaseDate;
@property (nonatomic) NSDate lastModifiedDate;
@property (nonatomic) NSString shortName;
@property (nonatomic) NSNumber shouldBookmarkPlayPosition;
@property (nonatomic) NSString versionHash;
@property (nonatomic) BOOL shouldReportPlayEvents;
@property (nonatomic) BOOL showComposer;
@property (nonatomic) NSString cloudUniversalLibraryID;
@property (nonatomic) q purchasedAdamID;
@property (nonatomic) q subscriptionAdamID;
@property (nonatomic) @ storeID;
@property (nonatomic) NSArray formerStoreAdamIDs;
@property (nonatomic) @ socialProfileID;
@property (nonatomic) BOOL storeRedownloadable;
@property (nonatomic) q trackCount;
@property (nonatomic) q trackNumber;
@property (nonatomic) q seasonNumber;
@property (nonatomic) q episodeCount;
@property (nonatomic) NSURL shortURL;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString videoSubtype;
@property (nonatomic) NSString workName;
@property (nonatomic) NSString handle;
@property (nonatomic) NSString nameRaw;
@property (nonatomic) BOOL privatePerson;
@property (nonatomic) BOOL verifiedPerson;
@property (nonatomic) q radioStationTypeID;
@property (nonatomic) NSString radioStationSubtype;
@property (nonatomic) BOOL isChart;
@property (nonatomic) NSString radioStationProviderName;
@property (nonatomic) BOOL live;
@property (nonatomic) NSDate startingAirDate;
@property (nonatomic) NSDate endingAirDate;
@property (nonatomic) NSArray radioStationEvents;
@property (nonatomic) NSURL classicalURL;
- (id)playlistType;
- (long long)trackCount;
- (id)genreNames;
- (id)artistName;
- (id)releaseDate;
- (id)classicalURL;
- (id)cloudUniversalLibraryID;
- (id)versionHash;
- (id)brickEditorialArtworkRequestToken;
- (id)shortName;
- (id)radioStationEvents;
- (id)curatorName;
- (id)formerStoreAdamIDs;
- (BOOL)isBeats1;
- (id)storeID;
- (id)stationGlyphRequestTokenForStorePlatformDictionary:;
- (long long)explicitRating;
- (id)stationGlyphRequestToken;
- (id)descriptionText;
- (id)tvEpisodeArtworkRequestToken;
- (id)latestAlbumArtworkRequestToken;
- (BOOL)isExplicitContent;
- (id)lastModifiedDate;
- (BOOL)isExpired;
- (id)artworkRequestToken;
- (id)metadataWithChildStorePlatformDictionaries:;
- (id)shortDescriptionText;
- (id)stationGlyphRequestTokenForStoreMusicAPIDictionary;
- (id)artworkTrackIDs;
- (long long)episodeCount;
- (id)handle;
- (BOOL)hasSubscriptionOffer;
- (id)socialProfileID;
- (BOOL)isPreorder;
- (unsigned long long)cloudID;
- (id)avatarArtworkRequestToken;
- (id)workName;
- (id)childStoreItemMetadatas;
- (id)endingAirDate;
- (id)_fetchValueFromStoreMusicAPIDictionary:;
- (id)playlistIdentifiers;
- (id)tvShowArtworkRequestToken;
- (id)collectionName;
- (long long)discCount;
- (BOOL)isLive;
- (id)offers;
- (id)movieClips;
- (id)cloudAlbumID;
- (id)initWithDownloadAssetDictionary:;
- (id)initWithCoder:;
- (id)childStorePlatformDictionaryForArtworkTrackID:;
- (long long)subscriptionAdamID;
- (id)_storePlatformReleaseDateFormatter;
- (long long)seasonNumber;
- (id)shortEditorNotes;
- (long long)movementNumber;
- (id)movementName;
- (id)artworkRequestTokenForStoreMusicAPIDictionary;
- (id)curatorID;
- (id)nameRaw;
- (id)artworkRequestTokenForScreenshotArtwork;
- (id)effectiveStorePlatformDictionary;
- (BOOL)isMasteredForiTunes;
- (id)_musicAPIDateFormatter;
- (id)personalMixSortKey;
- (id)metadataWithParentMetadata:;
- (id)expirationDate;
- (id)initWithStorePlatformDictionary:parentStoreItemMetadata:;
- (BOOL)isCompilation;
- (id)audioTraits;
- (void)encodeWithCoder:;
- (id)itemKind;
- (id)artworkRequestTokenForEditorialArtworkKind:;
- (id)parentStoreItemMetadata;
- (id)startingAirDate;
- (id)curatorHandle;
- (id)iTunesBrandType;
- (BOOL)hasTimeSyncedLyrics;
- (BOOL)isStoreRedownloadable;
- (id)editorNotes;
- (long long)movieClipsCount;
- (BOOL)hasMetadataForRequestReason:;
- (id)artworkRequestTokenForUberArtworkKind:;
- (id)importableStorePlatformDictionary;
- (long long)radioStationTypeID;
- (void).cxx_destruct;
- (BOOL)isVerifiedPerson;
- (id)composerName;
- (id)flowcaseEditorialArtworkRequestToken;
- (BOOL)hasArtistBiography;
- (id)popularity;
- (long long)movementCount;
- (id)artworkRequestTokenForStorePlatformDictionary:;
- (long long)discNumber;
- (id)initWithStorePlatformDictionary:expirationDate:;
- (id)description;
- (id)childrenStoreIDs;
- (id)copyrightText;
- (id)editorNotesWithStyle:;
- (id)artistStoreID;
- (BOOL)shouldReportPlayEvents;
- (id)childStorePlatformDictionaryForStoreID:;
- (id)metadataByAppendingMetadata:;
- (id)name;
- (BOOL)hasLyrics;
- (BOOL)isChart;
- (id)radioStationProviderName;
- (id)_storePlatformLastModifiedDateFormatter;
- (long long)purchasedAdamID;
- (id)artistUploadedContentType;
- (id)cacheableItemIdentifier;
- (id)descriptionTextWithStyle:;
- (id)collectionStoreID;
- (double)duration;
- (BOOL)isPrivatePerson;
- (id)initWithStoreMusicAPIDictionary:parentStoreItemMetadata:;
- (id)videoSubtype;
- (long long)trackNumber;
- (BOOL)hasSocialPosts;
- (id)initWithStorePlatformDictionary:parentStoreItemMetadata:expirationDate:;
- (BOOL)showComposer;
- (id)URL;
- (id)initWithStorePlatformDictionary:;
- (id)shouldBookmarkPlayPosition;
- (id)movieArtworkRequestToken;
- (id)copyWithZone:;
- (id)shortURL;
- (id)initWithStoreMusicAPIDictionary:;
- (id)radioStationSubtype;
+ (BOOL)supportsSecureCoding;
+ (id)storeServerCalendar;
+ (id)artworkRequestTokenForStorePlatformArtworkValue:;
@end
