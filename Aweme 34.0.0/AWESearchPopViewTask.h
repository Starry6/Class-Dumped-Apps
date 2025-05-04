@interface AWESearchPopViewTask : NSObject
@property (nonatomic) AWESearchPopInfo popInfo;
@property (nonatomic) @? shouldShowPopView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showWithCloseCallback:;
- (id)shouldShowPopView;
- (void)setShouldShowPopView:;
- (void)showToastMsg:;
- (id)popInfo;
- (void)setPopInfo:;
- (id)popID;
- (void)sendShowLog;
- (void)sendFailedLogWithErrorMsg:;
- (void).cxx_destruct;
@end
