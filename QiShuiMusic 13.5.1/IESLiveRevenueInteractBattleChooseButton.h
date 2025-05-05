@interface IESLiveRevenueInteractBattleChooseButton : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString eventName;
@property (nonatomic) @? actionBlock;
@property (nonatomic) q entranceType;
- (long long)entranceType;
- (void)setEntranceType:;
- (void)setText:;
- (id)actionBlock;
- (void)setType:;
- (long long)type;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)text;
- (void)setActionBlock:;
- (void)setToast:;
- (id)toast;
@end
