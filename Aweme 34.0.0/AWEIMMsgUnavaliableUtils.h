@interface AWEIMMsgUnavaliableUtils : NSObject
+ (void)reloadCellWithAnimation:message:beforeReloadBlock:;
+ (id)messageCellForCellModel:message:;
+ (id)refactorMessageCellForCellModel:message:;
+ (id)commonMessageCellForCellModel:message:;
@end
