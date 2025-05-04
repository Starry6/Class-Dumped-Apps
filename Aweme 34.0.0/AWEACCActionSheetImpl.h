@interface AWEACCActionSheetImpl : NSObject
@property (nonatomic) AWEActionSheet sheet;
@property (nonatomic) DUXActionSheet duxSheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCActionSheetDelegate> delegate;
- (id)titleForActionSheet;
- (id)buttonTexts;
- (void)didClickedButtonAtIndex:;
- (id)duxSheet;
- (void)setDuxSheet:;
- (void)show;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)sheet;
- (void)setSheet:;
@end
