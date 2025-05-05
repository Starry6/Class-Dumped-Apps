@interface IESLivePKFeedbackViewModelFactory : NSObject
@property (nonatomic) IESLivePKModel pkmodel;
- (id)pkmodel;
- (id)createPKFeedbackModel;
- (id)p_trackVendorNameWithType:;
- (void)setPkmodel:;
- (void).cxx_destruct;
+ (id)pkFeedbackViewModelWithDIContext:;
@end
