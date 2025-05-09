@interface MPMediaItem : MPMediaEntity
@property (nonatomic) NSArray chapters;
@property (nonatomic) NSDate lastPlayedDate;
@property (nonatomic) BOOL isRental;
@property (nonatomic) BOOL isITunesU;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (nonatomic) Q year;
@property (nonatomic) Q skipCountSinceSync;
@property (nonatomic) Q playCountSinceSync;
@property (nonatomic) NSDate lastSkippedDate;
@property (nonatomic) NSDate dateAccessed;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) BOOL rememberBookmarkTime;
@property (nonatomic) NSDate dateDownloaded;
@property (nonatomic) double effectiveStopTime;
@property (nonatomic) NSString effectiveAlbumArtist;
@property (nonatomic) BOOL isUsableAsRepresentativeItem;
@property (nonatomic) Q persistentID;
@property (nonatomic) Q mediaType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString albumTitle;
@property (nonatomic) Q albumPersistentID;
@property (nonatomic) NSString artist;
@property (nonatomic) Q artistPersistentID;
@property (nonatomic) NSString albumArtist;
@property (nonatomic) Q albumArtistPersistentID;
@property (nonatomic) NSString genre;
@property (nonatomic) Q genrePersistentID;
@property (nonatomic) NSString composer;
@property (nonatomic) Q composerPersistentID;
@property (nonatomic) double playbackDuration;
@property (nonatomic) Q albumTrackNumber;
@property (nonatomic) Q albumTrackCount;
@property (nonatomic) Q discNumber;
@property (nonatomic) Q discCount;
@property (nonatomic) MPMediaItemArtwork artwork;
@property (nonatomic) BOOL explicitItem;
@property (nonatomic) NSString lyrics;
@property (nonatomic) BOOL compilation;
@property (nonatomic) NSDate releaseDate;
@property (nonatomic) Q beatsPerMinute;
@property (nonatomic) NSString comments;
@property (nonatomic) NSURL assetURL;
@property (nonatomic) BOOL cloudItem;
@property (nonatomic) BOOL protectedAsset;
@property (nonatomic) NSString podcastTitle;
@property (nonatomic) Q podcastPersistentID;
@property (nonatomic) Q playCount;
@property (nonatomic) Q skipCount;
@property (nonatomic) Q rating;
@property (nonatomic) NSString userGrouping;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) NSDate dateAdded;
@property (nonatomic) NSString playbackStoreID;
@property (nonatomic) BOOL preorder;
- (id)artist;
- (unsigned long long)playCount;
- (void)setPlayCount:;
- (unsigned long long)mediaType;
- (id)releaseDate;
- (id)composer;
- (id)genre;
- (unsigned long long)year;
- (id)artwork;
- (BOOL)isExplicitItem;
- (id)assetURL;
- (unsigned long long)rating;
- (id)dateAdded;
- (void)didReceiveMemoryWarning;
- (double)playbackDuration;
- (BOOL)isPreorder;
- (id)representativeItem;
- (unsigned long long)discCount;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)startTime;
- (double)stopTime;
- (BOOL)isCompilation;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (id)title;
- (id)lyrics;
- (id)predicateForProperty:;
- (unsigned long long)discNumber;
- (BOOL)isEqual:;
- (id)comments;
- (void)setRating:;
- (id)albumArtist;
- (unsigned long long)albumPersistentID;
- (double)bookmarkTime;
- (unsigned long long)albumTrackNumber;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)artistPersistentID;
- (unsigned long long)genrePersistentID;
- (unsigned long long)composerPersistentID;
- (id)artworkCatalog;
- (unsigned long long)skipCount;
- (unsigned long long)beatsPerMinute;
- (id)screenshotArtworkCatalog;
- (id)_artworkCatalogWithArtworkType:;
- (id)initWithPersistentID:;
- (id)initWithMultiverseIdentifier:library:;
- (BOOL)existsInLibrary;
- (id)multiverseIdentifier;
- (id)valuesForProperties:;
- (BOOL)didSkipWithPlayedToTime:;
- (void)incrementPlayCount;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:skipped:;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:;
- (double)nominalHasBeenPlayedThreshold;
- (id)_bestStoreURL;
- (void)populateLocationPropertiesWithPath:;
- (void)populateLocationPropertiesWithPath:assetProtectionType:;
- (void)populateLocationPropertiesWithPath:assetProtectionType:completionBlock:;
- (void)clearLocationProperties;
- (id)chapters;
- (id)effectiveAlbumArtist;
- (id)albumTitle;
- (BOOL)isRental;
- (BOOL)isITunesU;
- (BOOL)isCloudItem;
- (BOOL)hasProtectedAsset;
- (double)effectiveStopTime;
- (id)podcastTitle;
- (unsigned long long)podcastPersistentID;
- (unsigned long long)playCountSinceSync;
- (void)setPlayCountSinceSync:;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:;
- (id)dateAccessed;
- (void)setDateAccessed:;
- (void)setSkipCount:;
- (unsigned long long)skipCountSinceSync;
- (void)setSkipCountSinceSync:;
- (id)lastSkippedDate;
- (void)setLastSkippedDate:;
- (BOOL)hasBeenPlayed;
- (void)setHasBeenPlayed:;
- (id)playbackStoreID;
- (BOOL)rememberBookmarkTime;
- (id)userGrouping;
- (id)chaptersOfType:;
- (id)chapterOfType:atIndex:;
- (id)chapterOfType:atTime:;
- (unsigned long long)countOfChaptersOfType:;
- (void)gaplessHeuristicInfo:durationInSamples:lastPacketsResync:encodingDelay:encodingDrain:;
- (BOOL)isUsableAsRepresentativeItem;
- (id)dateDownloaded;
- (id)_directStoreURL;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkURL;
- (BOOL)MPSD_isDownloadable;
- (BOOL)MPSD_isDownloadInProgress;
+ (id)playingInfoFromAsset:withDefaultTitle:;
+ (id)playingInfoFromAsset:withDefaultTitle:playbackDuration:elapsedTime:;
+ (id)ql_propertyTitleFromAsset:;
+ (BOOL)supportsSecureCoding;
+ (id)persistentIDPropertyForGroupingType:;
+ (id)itemFromModelObject:;
+ (BOOL)_isValidItemProperty:;
+ (id)screenshotArtworkCatalogCacheProperties;
+ (id)fallbackTitlePropertyForGroupingType:;
+ (id)itemFromSong:;
+ (id)MPSD_mediaItemPropertiesForDownloadability;
+ (id)artworkCatalogCacheProperties;
+ (id)titlePropertyForGroupingType:;
+ (id)ULIDPropertyForGroupingType:;
+ (void)_createFilterableDictionary;
+ (BOOL)canFilterByProperty:;
+ (id)dynamicProperties;
@end
