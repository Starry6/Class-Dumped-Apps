@interface AWEFeedSlideActionPriorityManager : NSObject
@property (nonatomic) NSMutableDictionary priorityDict;
- (id)priorityDict;
- (BOOL)shouldShowWithController:;
- (void)setPriorityDict:;
- (void)registerController:;
- (void).cxx_destruct;
@end
