@interface CommunicationFilterItemCache : NSObject
@property (nonatomic) q isInList;
- (void)dealloc;
- (id)initWithFilterItem:isInList:;
- (BOOL)matchesItem:;
- (long long)isInList;
- (void)setIsInList:;
@end
