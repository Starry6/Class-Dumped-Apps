@interface AWEUGPendantDataAdapter : NSObject
@property (nonatomic) NSArray activityArr;
@property (nonatomic) NSMutableDictionary activityDic;
@property (nonatomic) NSArray pendantResources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanActivityDataModel;
- (id)getActivtiyArr;
- (void)updateActivityData:identify:completion:;
- (id)activityDic;
- (void)setActivityArr:;
- (void)setPendantResources:;
- (id)activityArr;
- (id)pendantResources;
- (void)setActivityDic:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
