@interface IESECMallPopupTask : NSObject
@property (nonatomic) IESECMallPopupTaskConfig taskConfig;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) <IESECMallPopupDelegate> delegate;
- (void)setTaskConfig:;
- (id)taskConfig;
- (id)uniqueId;
- (void)setDelegate:;
- (void)setUniqueId:;
- (id)delegate;
- (void).cxx_destruct;
@end
