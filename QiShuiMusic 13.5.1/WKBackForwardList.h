@interface WKBackForwardList : NSObject
@property (nonatomic) WKBackForwardListItem currentItem;
@property (nonatomic) WKBackForwardListItem backItem;
@property (nonatomic) WKBackForwardListItem forwardItem;
@property (nonatomic) NSArray backList;
@property (nonatomic) NSArray forwardList;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (void)_clear;
- (id)currentItem;
- (id)backItem;
- (id)backList;
- (id)itemAtIndex:;
- (id)forwardList;
- (id)forwardItem;
- (void)_removeAllItems;
@end
