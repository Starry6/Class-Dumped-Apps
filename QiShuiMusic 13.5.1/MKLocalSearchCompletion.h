@interface MKLocalSearchCompletion : NSObject
@property (nonatomic) <GEOCompletionItem> geoCompletionItem;
@property (nonatomic) BOOL alreadySentFeedback;
@property (nonatomic) NSArray displayLines;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) GEOSearchCategory category;
@property (nonatomic) GEOResolvedItem clientResolved;
@property (nonatomic) GEODirectionIntent directionIntent;
@property (nonatomic) MKLocalSearchCompletion directionIntentOrigin;
@property (nonatomic) MKLocalSearchCompletion directionIntentDestination;
@property (nonatomic) GEORetainedSearchMetadata retainedSearchMetadata;
@property (nonatomic) BOOL hasSortPriority;
@property (nonatomic) q sortPriority;
@property (nonatomic) q entryTapBehavior;
@property (nonatomic) GEOServerResultScoreMetadata serverResultScoreMetadata;
@property (nonatomic) Q serverSectionIndex;
@property (nonatomic) Q serverItemIndexInSection;
@property (nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property (nonatomic) NSString queryAcceleratorCompletionString;
@property (nonatomic) q autocompleteCellType;
@property (nonatomic) GEOCollectionResult collectionResult;
@property (nonatomic) GEOPublisherResult publisherResult;
@property (nonatomic) NSArray childItems;
@property (nonatomic) NSArray resultRefinements;
@property (nonatomic) GEOStyleAttributes iconStyleAttributes;
@property (nonatomic) NSString sourceID;
@property (nonatomic) NSString localizedSectionHeader;
@property (nonatomic) q type;
@property (nonatomic) NSInteger placeType;
@property (nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (nonatomic) float disambiguationRadiusMeters;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray titleHighlightRanges;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray subtitleHighlightRanges;
- (id)mapItem;
- (void)setSourceID:;
- (long long)_type;
- (int)_placeType;
- (id)sourceID;
- (void)sendFeedback;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)description;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)category;
- (id)clientResolved;
- (id)directionIntent;
- (long long)sortPriority;
- (BOOL)hasSortPriority;
- (id)serverResultScoreMetadata;
- (id)queryAcceleratorCompletionString;
- (float)_disambiguationRadiusMeters;
- (id)resultRefinements;
- (id)retainedSearchMetadata;
- (id)localizedSectionHeader;
- (id)highlightsForLine:;
- (id)queryLine;
- (id)calloutTitle;
- (BOOL)getCoordinate:;
- (id)displayLines;
- (long long)entryTapBehavior;
- (long long)autocompleteCellType;
- (BOOL)hasQueryAcceleratorAffordanceEnabled;
- (id)collectionResult;
- (id)publisherResult;
- (id)iconStyleAttributes;
- (id)childItems;
- (unsigned long long)serverSectionIndex;
- (unsigned long long)serverItemIndexInSection;
- (id)geoCompletionItem;
- (id)_geoCompletionItem;
- (id)initWithGeoCompletionItem:serverSectionIndex:serverItemIndexInSection:;
- (id)titleHighlightRanges;
- (id)subtitleHighlightRanges;
- (id)copyStorage;
- (BOOL)_hasDisambiguationRadiusMeters;
- (id)iconWithScale:;
- (void)setLocalizedSectionHeader:;
- (BOOL)_alreadySentFeedback;
- (id)directionIntentOrigin;
- (void)setDirectionIntentOrigin:;
- (id)directionIntentDestination;
- (void)setDirectionIntentDestination:;
@end
