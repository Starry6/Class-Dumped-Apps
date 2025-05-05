@interface MFContactsSearchResultsModel : NSObject
@property (nonatomic) NSArray enteredRecipients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_isResetting;
- (id)enteredRecipients;
- (void)setEnteredRecipients:;
- (void)_addResults:ofType:;
- (BOOL)_shouldProcessResultsAfterFinishingType:;
- (BOOL)_didFinishSearchForType:;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:;
- (void)_appendSortedResultsOfType:excluding:toResults:;
- (id)initWithFavorMobileNumbers:;
- (id)initWithResultTypeSortOrderComparator:resultTypePriorityComparator:favorMobileNumbers:;
- (void)addResults:ofType:;
- (void)_finishSearchOfType:;
- (id)_bestRecipientForAddress:fallback:;
- (void)_addBestRecipientsForRecipients:excluding:toArray:;
- (void)processAddedResultsOfType:completion:;
- (id)_dictionaryForResultType:;
@end
