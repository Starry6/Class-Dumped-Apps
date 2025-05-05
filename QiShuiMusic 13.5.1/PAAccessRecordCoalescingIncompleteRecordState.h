@interface PAAccessRecordCoalescingIncompleteRecordState : NSObject
@property (nonatomic) <PAAccessRecordCoalescingState> previousState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)previousState;
- (id)recordsToRepublish;
- (id)initWithPreviousState:recordToRepublish:;
@end
