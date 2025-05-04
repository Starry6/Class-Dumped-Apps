@interface AWEIMNoticeOnSideManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMDYOfficialDataManagerProtocol> officialDataManager;
- (void)onOtherCountChangeReason:model:;
- (id)officialDataManager;
- (void)markReadForNoticeGroupList:onComplete:;
- (id)expandedCustomserServiceGroups;
- (void)setOfficialDataManager:;
- (id)notificationManager;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
