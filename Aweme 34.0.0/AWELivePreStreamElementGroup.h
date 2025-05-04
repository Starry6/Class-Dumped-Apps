@interface AWELivePreStreamElementGroup : NSObject
- (id)nameListForContainersWithScene:;
- (id)nameListForElementsInContainer:scene:;
- (id)containerNameListForFeedPreStream;
- (id)containerNameListForAFDPreStream;
- (id)containerNameListForDetailPreStream;
- (id)nameListForFunctionContainer;
- (id)elementNameListForFeedPreStream;
- (id)elementNameListForAFDPreStream;
- (id)elementNameListForDetailPreStream;
- (id)nameListForElementInFunctionContainer;
@end
