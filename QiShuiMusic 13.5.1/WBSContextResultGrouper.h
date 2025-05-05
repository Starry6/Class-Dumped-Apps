@interface WBSContextResultGrouper : NSObject
@property (nonatomic) Q minimumNumberOfItemsRequiredInGroup;
- (id)init;
- (id)groupItems:;
- (unsigned long long)minimumNumberOfItemsRequiredInGroup;
- (void)setMinimumNumberOfItemsRequiredInGroup:;
@end
