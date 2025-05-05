@interface CJPayRechargeServiceImp : NSObject
@property (nonatomic) <CJPayAPIDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)i_openH5RechargeDeskWithParams:delegate:;
- (void)p_handleCJRechargeWebCallBack:;
- (void)p_processWebCallback:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (void)registerComponents;
+ (id)sharedInstance;
@end
