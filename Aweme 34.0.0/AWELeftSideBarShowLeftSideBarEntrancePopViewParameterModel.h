@interface AWELeftSideBarShowLeftSideBarEntrancePopViewParameterModel : NSObject
@property (nonatomic) NSString businessId;
@property (nonatomic) NSString showText;
@property (nonatomic) @? completion;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? dismissBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)setShowText:;
- (id)completion;
- (id)businessId;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setBusinessId:;
- (id)showText;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
