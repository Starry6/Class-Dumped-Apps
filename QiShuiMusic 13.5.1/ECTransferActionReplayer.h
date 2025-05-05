@interface ECTransferActionReplayer : ECLocalActionReplayer
- (id)replayAction;
- (id)failActionWithError:;
- (id)_downLoadSourceMessagesInAction:;
- (id)_transferItemsInAction:isMove:;
- (id)_allCopyItemsBySourceRemoteIDsForAction:failedItems:;
- (id)_appendMessagesInAction:;
- (id)_deleteItemsInAction:;
@end
