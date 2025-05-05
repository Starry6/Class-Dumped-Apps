@interface IESLiveCurrentShowVCRecordServiceImpl : NSObject
@property (nonatomic) UIViewController innerCurrentShowVC;
@property (nonatomic) NSString innerCurrentShowVCName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentShowVC;
- (id)currentShowVCName;
- (id)innerCurrentShowVC;
- (id)innerCurrentShowVCName;
- (void)setCurrentShowVC:;
- (void)setInnerCurrentShowVC:;
- (void)setInnerCurrentShowVCName:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
