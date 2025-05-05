@interface FLApprovedItemsFilter : NSObject
- (BOOL)overrideGroupRestrictionsForItem:;
- (void).cxx_destruct;
- (unsigned long long)approvalStatusForItem:;
+ (id)sharedFilter;
@end
