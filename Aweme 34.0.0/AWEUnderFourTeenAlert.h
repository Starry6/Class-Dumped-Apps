@interface AWEUnderFourTeenAlert : NSObject
@property (nonatomic) AWETeenUnderFourTeenAlertView alertView;
@property (nonatomic) Q type;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? closeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCloseBlock:;
- (void)showWithCloseCallback:;
- (id)closeBlock;
- (void)p_setupAlertViewWithType:;
- (id)initWithAlertType:dismissBlock:;
- (id)alertView;
- (unsigned long long)type;
- (void)setType:;
- (void)setAlertView:;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
