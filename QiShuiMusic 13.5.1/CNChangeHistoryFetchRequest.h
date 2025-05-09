@interface CNChangeHistoryFetchRequest : CNFetchRequest
@property (nonatomic) CNChangeHistoryAnchor startingAnchor;
@property (nonatomic) BOOL enforceClientIdentifier;
@property (nonatomic) q resultType;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) BOOL includeChangeAnchors;
@property (nonatomic) BOOL includeChangeIDs;
@property (nonatomic) BOOL includeExternalIDs;
@property (nonatomic) BOOL includeImagesChanged;
@property (nonatomic) BOOL includeLabeledValueChanges;
@property (nonatomic) BOOL includeLinkingChanges;
@property (nonatomic) BOOL includeMeCardChanges;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) NSData startingToken;
@property (nonatomic) NSArray additionalContactKeyDescriptors;
@property (nonatomic) BOOL shouldUnifyResults;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL includeGroupChanges;
@property (nonatomic) NSArray excludedTransactionAuthors;
- (BOOL)mutableObjects;
- (id)init;
- (id)containerIdentifier;
- (void)setIncludeMeCardChanges:;
- (id)initWithClientIdentifier:;
- (void)setStartingToken:;
- (void)setIncludeLinkingChanges:;
- (id)additionalContactKeyDescriptors;
- (void)setIncludeImagesChanged:;
- (void)setIncludeLabeledValueChanges:;
- (void)setAdditionalContactKeyDescriptors:;
- (void)setResultType:;
- (id)initWithCoder:;
- (void)setIncludeExternalIDs:;
- (void)setIncludeGroupChanges:;
- (long long)resultType;
- (BOOL)includeImagesChanged;
- (void)setExcludedTransactionAuthors:;
- (BOOL)includeMeCardChanges;
- (void)encodeWithCoder:;
- (BOOL)includeChangeAnchors;
- (BOOL)shouldEnforceClientIdentifer;
- (BOOL)unifyResults;
- (id)startingAnchor;
- (BOOL)includeExternalIDs;
- (BOOL)includeGroupChanges;
- (void)setUnifyResults:;
- (void).cxx_destruct;
- (id)excludedTransactionAuthors;
- (void)setContainerIdentifier:;
- (id)description;
- (void)setStartingAnchor:;
- (void)setShouldUnifyResults:;
- (BOOL)includeChangeIDs;
- (id)startingToken;
- (BOOL)shouldUnifyResults;
- (void)setIncludeChangeAnchors:;
- (void)setMutableObjects:;
- (BOOL)includeLabeledValueChanges;
- (id)clientIdentifier;
- (id)initWithStartingAnchor:;
- (BOOL)includeLinkingChanges;
- (void)setIncludeChangeIDs:;
- (void)acceptVisitor:;
+ (BOOL)supportsSecureCoding;
@end
