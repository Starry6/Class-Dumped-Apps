@interface TMUPCClipBoardSwitchManager : TMModule
@property (nonatomic) BOOL clipBoardStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)clipBoardStatus;
- (void)popupRecallView:type:completion:;
- (void)setClipBoardStatus:;
@end
