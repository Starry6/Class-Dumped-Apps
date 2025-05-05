@interface GEOResultRefinementMultiSelect : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray multiSelect;
@property (nonatomic) I maximumNumberOfSelectElements;
@property (nonatomic) q clauseType;
@property (nonatomic) BOOL showEqualWidthButtonsOnFilterView;
@property (nonatomic) NSString displayNameForMultiSelected;
@property (nonatomic) NSString multiSelectIdentifier;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
- (id)multiSelect;
- (void)setMultiSelect:;
- (id)initWithDisplayName:multiSelect:maximumNumberOfSelectElements:clauseType:showEqualWidthButtonsOnFilterView:displayNameForMultiSelected:multiSelectIdentifier:;
- (id)initWithResultRefinementMultiSelect:;
- (id)convertToGEOPDResultRefinementMultiSelect;
- (unsigned int)maximumNumberOfSelectElements;
- (void)setMaximumNumberOfSelectElements:;
- (BOOL)showEqualWidthButtonsOnFilterView;
- (long long)clauseType;
- (void)setClauseType:;
- (id)displayNameForMultiSelected;
- (id)multiSelectIdentifier;
@end
