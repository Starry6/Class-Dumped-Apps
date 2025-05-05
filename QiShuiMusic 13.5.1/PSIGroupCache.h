@interface PSIGroupCache : NSObject
@property (nonatomic) Q numberOfGroupsChecked;
@property (nonatomic) Q numberOfGroupsQueried;
- (unsigned long long)idOfGroupWithText:identifier:category:owningGroupId:didUpdateGroup:;
- (unsigned long long)numberOfGroupsChecked;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (unsigned long long)numberOfGroupsQueried;
@end
