@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable
@property (nonatomic) BOOL hasQuery;
@property (nonatomic) NSString query;
@property (nonatomic) BOOL hasViewportInfo;
@property (nonatomic) GEOPDViewportInfo viewportInfo;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) NSInteger maxResults;
@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL highlightDiff;
@property (nonatomic) BOOL hasCategorySuggestionEntryMetadata;
@property (nonatomic) NSData categorySuggestionEntryMetadata;
@property (nonatomic) BOOL hasCategorySuggestionEntry;
@property (nonatomic) GEOPDAutocompleteEntry categorySuggestionEntry;
@property (nonatomic) BOOL hasInterleaveCategorySuggestions;
@property (nonatomic) BOOL interleaveCategorySuggestions;
@property (nonatomic) BOOL hasVenueIdentifier;
@property (nonatomic) GEOPDVenueIdentifier venueIdentifier;
@property (nonatomic) BOOL hasSupportDirectionIntentSuggestions;
@property (nonatomic) BOOL supportDirectionIntentSuggestions;
@property (nonatomic) BOOL hasRetainedSearch;
@property (nonatomic) GEOPDRetainedSearchMetadata retainedSearch;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent;
@property (nonatomic) Q supportedListTypesCount;
@property (nonatomic) ^i supportedListTypes;
@property (nonatomic) BOOL hasQuerySuggestionEntry;
@property (nonatomic) GEOPDAutocompleteEntry querySuggestionEntry;
@property (nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property (nonatomic) BOOL supportClientRankingFeatureMetadata;
@property (nonatomic) BOOL hasMaxQueryBuilderSuggestions;
@property (nonatomic) NSInteger maxQueryBuilderSuggestions;
@property (nonatomic) BOOL hasSupportSectionHeader;
@property (nonatomic) BOOL supportSectionHeader;
@property (nonatomic) Q supportedAutocompleteResultCellTypesCount;
@property (nonatomic) ^i supportedAutocompleteResultCellTypes;
@property (nonatomic) BOOL hasSupportRapAffordance;
@property (nonatomic) BOOL supportRapAffordance;
@property (nonatomic) Q knownRefinementTypesCount;
@property (nonatomic) ^i knownRefinementTypes;
@property (nonatomic) BOOL hasPlaceSummaryRevision;
@property (nonatomic) NSInteger placeSummaryRevision;
@property (nonatomic) Q supportedPlaceSummaryFormatTypesCount;
@property (nonatomic) ^i supportedPlaceSummaryFormatTypes;
@property (nonatomic) BOOL hasEvChargingParameters;
@property (nonatomic) GEOPDSSearchEvChargingParameters evChargingParameters;
@property (nonatomic) Q supportedHighlightTypesCount;
@property (nonatomic) ^i supportedHighlightTypes;
@property (nonatomic) BOOL hasAutocompleteOriginationInfo;
@property (nonatomic) GEOPDAutocompleteOriginationInfo autocompleteOriginationInfo;
@property (nonatomic) BOOL hasSupportClientRankingCompositeFeatures;
@property (nonatomic) BOOL supportClientRankingCompositeFeatures;
@property (nonatomic) BOOL hasSupportStructuredRapAffordance;
@property (nonatomic) BOOL supportStructuredRapAffordance;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (int)StringAsSupportedPlaceSummaryFormatTypes:;
- (id)knownRefinementTypes;
- (void)dealloc;
- (BOOL)supportStructuredRapAffordance;
- (void)setHasSupportUnresolvedDirectionIntent:;
- (id)initWithJSON:;
- (id)supportedAutocompleteResultCellTypes;
- (id)jsonRepresentation;
- (int)StringAsSupportedAutocompleteResultCellTypes:;
- (void)clearSupportedAutocompleteResultCellTypes;
- (void)setQuery:;
- (id)supportedPlaceSummaryFormatTypes;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)setSupportedAutocompleteResultCellTypes:count:;
- (BOOL)hasPlaceSummaryRevision;
- (void)writeTo:;
- (int)placeSummaryRevision;
- (id)query;
- (void)setHasSupportStructuredRapAffordance:;
- (unsigned long long)hash;
- (void)setSupportUnresolvedDirectionIntent:;
- (unsigned long long)supportedPlaceSummaryFormatTypesCount;
- (BOOL)hasSupportClientRankingFeatureMetadata;
- (void)copyTo:;
- (id)knownRefinementTypesAsString:;
- (void)mergeFrom:;
- (void)clearKnownRefinementTypes;
- (BOOL)hasVenueIdentifier;
- (BOOL)hasSupportClientRankingCompositeFeatures;
- (int)supportedAutocompleteResultCellTypeAtIndex:;
- (id)supportedPlaceSummaryFormatTypesAsString:;
- (void)setVenueIdentifier:;
- (void)setSupportClientRankingCompositeFeatures:;
- (int)supportedPlaceSummaryFormatTypeAtIndex:;
- (void)setSupportClientRankingFeatureMetadata:;
- (void)setSupportedPlaceSummaryFormatTypes:count:;
- (BOOL)hasSupportStructuredRapAffordance;
- (int)StringAsKnownRefinementTypes:;
- (id)initWithData:;
- (void)setHasSupportClientRankingCompositeFeatures:;
- (id)venueIdentifier;
- (void).cxx_destruct;
- (unsigned long long)supportedAutocompleteResultCellTypesCount;
- (BOOL)hasSupportUnresolvedDirectionIntent;
- (void)setHasPlaceSummaryRevision:;
- (BOOL)readFrom:;
- (int)knownRefinementTypeAtIndex:;
- (void)setPlaceSummaryRevision:;
- (void)setMaxResults:;
- (void)addSupportedPlaceSummaryFormatType:;
- (id)description;
- (void)clearSupportedPlaceSummaryFormatTypes;
- (BOOL)supportUnresolvedDirectionIntent;
- (id)dictionaryRepresentation;
- (BOOL)supportClientRankingCompositeFeatures;
- (void)addKnownRefinementType:;
- (id)supportedAutocompleteResultCellTypesAsString:;
- (void)setHasSupportClientRankingFeatureMetadata:;
- (BOOL)hasQuery;
- (unsigned long long)knownRefinementTypesCount;
- (void)setKnownRefinementTypes:count:;
- (void)setSupportStructuredRapAffordance:;
- (int)maxResults;
- (BOOL)isEqual:;
- (BOOL)supportClientRankingFeatureMetadata;
- (id)copyWithZone:;
- (void)addSupportedAutocompleteResultCellType:;
- (BOOL)hasViewportInfo;
- (id)viewportInfo;
- (void)setViewportInfo:;
- (void)setHasMaxResults:;
- (BOOL)hasMaxResults;
- (BOOL)highlightDiff;
- (void)setHighlightDiff:;
- (void)setHasHighlightDiff:;
- (BOOL)hasHighlightDiff;
- (BOOL)hasCategorySuggestionEntryMetadata;
- (id)categorySuggestionEntryMetadata;
- (void)setCategorySuggestionEntryMetadata:;
- (BOOL)hasCategorySuggestionEntry;
- (id)categorySuggestionEntry;
- (void)setCategorySuggestionEntry:;
- (BOOL)interleaveCategorySuggestions;
- (void)setInterleaveCategorySuggestions:;
- (void)setHasInterleaveCategorySuggestions:;
- (BOOL)hasInterleaveCategorySuggestions;
- (BOOL)supportDirectionIntentSuggestions;
- (void)setSupportDirectionIntentSuggestions:;
- (void)setHasSupportDirectionIntentSuggestions:;
- (BOOL)hasSupportDirectionIntentSuggestions;
- (BOOL)hasRetainedSearch;
- (id)retainedSearch;
- (void)setRetainedSearch:;
- (unsigned long long)supportedListTypesCount;
- (id)supportedListTypes;
- (void)clearSupportedListTypes;
- (void)addSupportedListType:;
- (int)supportedListTypeAtIndex:;
- (void)setSupportedListTypes:count:;
- (id)supportedListTypesAsString:;
- (int)StringAsSupportedListTypes:;
- (BOOL)hasQuerySuggestionEntry;
- (id)querySuggestionEntry;
- (void)setQuerySuggestionEntry:;
- (int)maxQueryBuilderSuggestions;
- (void)setMaxQueryBuilderSuggestions:;
- (void)setHasMaxQueryBuilderSuggestions:;
- (BOOL)hasMaxQueryBuilderSuggestions;
- (BOOL)supportSectionHeader;
- (void)setSupportSectionHeader:;
- (void)setHasSupportSectionHeader:;
- (BOOL)hasSupportSectionHeader;
- (BOOL)supportRapAffordance;
- (void)setSupportRapAffordance:;
- (void)setHasSupportRapAffordance:;
- (BOOL)hasSupportRapAffordance;
- (id)placeSummaryRevisionAsString:;
- (int)StringAsPlaceSummaryRevision:;
- (BOOL)hasEvChargingParameters;
- (id)evChargingParameters;
- (void)setEvChargingParameters:;
- (unsigned long long)supportedHighlightTypesCount;
- (id)supportedHighlightTypes;
- (void)clearSupportedHighlightTypes;
- (void)addSupportedHighlightType:;
- (int)supportedHighlightTypeAtIndex:;
- (void)setSupportedHighlightTypes:count:;
- (id)supportedHighlightTypesAsString:;
- (int)StringAsSupportedHighlightTypes:;
- (BOOL)hasAutocompleteOriginationInfo;
- (id)autocompleteOriginationInfo;
- (void)setAutocompleteOriginationInfo:;
+ (BOOL)isValid:;
@end
