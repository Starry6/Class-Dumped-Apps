@interface IESECWinEnterStoreSectionController : IGListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (void)gotoStore;
- (void)trackWithEventName:once:;
- (long long)numberOfItems;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
