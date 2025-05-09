@interface CSSearchQueryContext : NSObject
@property (nonatomic) S flags;
@property (nonatomic) NSArray protectionClasses;
@property (nonatomic) BOOL allowSpotlightEntitledAttributes;
@property (nonatomic) BOOL allowPhotosEntitledAttributes;
@property (nonatomic) NSString clientBundleID;
@property (nonatomic) NSArray bundleIDs;
@property (nonatomic) NSArray additionalBundleIDs;
@property (nonatomic) NSArray rankingQueries;
@property (nonatomic) NSArray additionalQueries;
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSArray markedTextArray;
@property (nonatomic) NSArray disableBundles;
@property (nonatomic) NSString userQuery;
@property (nonatomic) CSSuggestion suggestion;
@property (nonatomic) NSArray groupingRules;
@property (nonatomic) NSInteger rankingType;
@property (nonatomic) NSString filterQuery;
@property (nonatomic) q strongRankingQueryCount;
@property (nonatomic) q dominantRankingQueryCount;
@property (nonatomic) q dominatedRankingQueryCount;
@property (nonatomic) q shortcutBit;
@property (nonatomic) q highMatchBit;
@property (nonatomic) q lowMatchBit;
@property (nonatomic) q highRecencyBit;
@property (nonatomic) q lowRecencyBit;
@property (nonatomic) q maxCount;
@property (nonatomic) q minCount;
@property (nonatomic) q maxSuggestionCount;
@property (nonatomic) q completionResultCount;
@property (nonatomic) q queryID;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL sodium;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (nonatomic) T fuzzyMask;
@property (nonatomic) T fuzzyMatch;
@property (nonatomic) NSString completionString;
@property (nonatomic) NSArray completionAttributes;
@property (nonatomic) NSArray completionWeights;
@property (nonatomic) I completionOptions;
@property (nonatomic) I qos;
@property (nonatomic) I userQueryOptions;
@property (nonatomic) double currentTime;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSArray mountPoints;
@property (nonatomic) NSArray scopes;
@property (nonatomic) NSString reason;
@property (nonatomic) _CSQueryRewriteContext rewriteContext;
@property (nonatomic) NSArray fetchAttributes;
@property (nonatomic) NSArray filterQueries;
@property (nonatomic) NSString keyboardLanguage;
@property (nonatomic) Q sourceOptions;
- (long long)queryID;
- (int)rankingType;
- (BOOL)fsOnly;
- (void)setMarkedTextArray:;
- (BOOL)sodium;
- (void)setInternal:;
- (void)setCurrentTime:;
- (void)setKeyboardLanguage:;
- (void)setGroupingRules:;
- (void)setOptions:;
- (void)setPlayback:;
- (id)groupingRules;
- (void)setLive:;
- (id)markedTextArray;
- (void)setRankingType:;
- (long long)dominantRankingQueryCount;
- (id)bundleIDs;
- (void)setMinCount:;
- (BOOL)allowSpotlightEntitledAttributes;
- (id)suggestion;
- (long long)minCount;
- (id)rankingQueries;
- (void)setLowPriority:;
- (long long)completionResultCount;
- (void)setRankingQueries:;
- (id)init;
- (unsigned int)qos;
- (void)setQos:;
- (void)setFilterQueries:;
- (id)xpc_dictionary;
- (BOOL)allowPhotosEntitledAttributes;
- (BOOL)enableSuggestionTokens;
- (id)disableBundles;
- (long long)highMatchBit;
- (void)setAttribute:;
- (void)setHighMatchBit:;
- (BOOL)attribute;
- (unsigned int)userQueryOptions;
- (void)setCounting:;
- (BOOL)pommesZKW;
- (id)customFieldSpecifications;
- (long long)maxCount;
- (void)setHighRecencyBit:;
- (void)setCompletionResultCount:;
- (unsigned int)completionOptions;
- (id)filterQueries;
- (void)setFetchAttributes:;
- (void)setMaxCount:;
- (void)setGrouped:;
- (long long)maxItemCount;
- (id)completionAttributes;
- (void)setSourceOptions:;
- (void)setFilterQuery:;
- (BOOL)lowPriority;
- (id)completionWeights;
- (long long)strongRankingQueryCount;
- (void)setParseUserQuery:;
- (id)scopes;
- (id)additionalBundleIDs;
- (long long)lowMatchBit;
- (BOOL)counting;
- (BOOL)parseUserQuery;
- (void)setEnableSuggestionTokens:;
- (void)setEnableResultCountsPerSuggestion:;
- (id)reason;
- (void)setDisableBundles:;
- (void)setSuggestion:;
- (void)setMaxItemCount:;
- (void)setLowRecencyBit:;
- (id)initWithCoder:;
- (void)setQueryID:;
- (BOOL)enableRecentSuggestions;
- (void)setClientBundleID:;
- (void)setIncludeUserActivities:;
- (void)setCompletionString:;
- (void)setGenerateSuggestions:;
- (void)setProtectionClasses:;
- (void)setAdditionalBundleIDs:;
- (void)setDisableBlockingOnIndex:;
- (void)setDominantRankingQueryCount:;
- (id)debugDescription;
- (double)maxAge;
- (id)clientBundleID;
- (void)setReason:;
- (void)setPommesSuggestions:;
- (void)setMinL2Score:;
- (void)setDominatedRankingQueryCount:;
- (void)setSodium:;
- (unsigned long long)sourceOptions;
- (long long)lowRecencyBit;
- (id)completionString;
- (void)setFuzzyMatch:;
- (long long)highRecencyBit;
- (id)fuzzyMatch;
- (void)setAllowPhotosEntitledAttributes:;
- (id)initWithQoS:;
- (double)minL2Score;
- (BOOL)internal;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (long long)dominatedRankingQueryCount;
- (void)setFsOnly:;
- (id)options;
- (BOOL)playback;
- (void)setCompletionOptions:;
- (BOOL)disableNLP;
- (void)setAdditionalQueries:;
- (void)setUserQueryOptions:;
- (void)setPreferredLanguages:;
- (id)mountPoints;
- (void)setMountPoints:;
- (void)setMaxAge:;
- (id)additionalQueries;
- (id)fuzzyMask;
- (void)setRewriteContext:;
- (void)setCompletionWeights:;
- (BOOL)disableBlockingOnIndex;
- (id)preferredLanguages;
- (void).cxx_destruct;
- (id)fetchAttributes;
- (id)rewriteContext;
- (void)setUserQuery:;
- (void)setLowMatchBit:;
- (void)setMaxSuggestionCount:;
- (double)currentTime;
- (BOOL)enableResultCountsPerSuggestion;
- (id)description;
- (void)setBundleIDs:;
- (void)setCompletionAttributes:;
- (BOOL)pommesSuggestions;
- (BOOL)live;
- (void)setShortcutBit:;
- (id)filterQuery;
- (void)setFlags:;
- (unsigned short)flags;
- (void)setCustomFieldSpecifications:;
- (BOOL)includeUserActivities;
- (BOOL)grouped;
- (long long)maxSuggestionCount;
- (void)setDisableNLP:;
- (BOOL)generateSuggestions;
- (id)keyboardLanguage;
- (void)setFuzzyMask:;
- (void)setAllowSpotlightEntitledAttributes:;
- (void)setEnableRecentSuggestions:;
- (id)userQuery;
- (void)setPommesZKW:;
- (id)protectionClasses;
- (void)setStrongRankingQueryCount:;
- (long long)shortcutBit;
- (void)setScopes:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
