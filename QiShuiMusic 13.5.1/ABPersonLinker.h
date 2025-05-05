@interface ABPersonLinker : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithAddressBook:;
- (id)otherPeopleInDatabaseMatchingPerson:notIncludingPeople:;
- (id)otherPeopleInArray:matchingPerson:;
- (BOOL)shouldLinkPerson:toPeopleInDatabase:andNewlyAddedPeople:inInitialLinking:;
- (id)suggestedPeopleToLinkWithPerson:isInitialLinking:;
- (void)addPerson:toDictionary:withProperty:;
- (void)presortPeople:;
- (void)makeLinksForAddedPeople:inInitialLinking:countingOuterIterations:detectedLinkCount:;
- (void)removeAllLinks;
- (void)makeInitialLinksCountingOuterIterations:;
- (void)makeInitialLinks;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:withLimit:;
- (BOOL)linkRecentlyAddedPeopleWithLimit:;
- (void)linkRecentlyAddedPeople;
- (void)linkNewlyAddedPerson:;
+ (BOOL)isAutoLinkingEnabled;
+ (BOOL)isInitialLinkingEnabled;
+ (BOOL)isLinkDataValidForAddressBook:;
+ (void)startAutoLinkingNewPeopleInAddressBook:inProcess:;
@end
