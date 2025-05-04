@interface AWEPerfEvaluateExtCollector : NSObject
@property (nonatomic) NSString subType;
@property (nonatomic) BOOL needTem;
@property (nonatomic) BOOL needFreeDiskSpace;
@property (nonatomic) BOOL needSystemUptime;
@property (nonatomic) NSSet subTypeSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)generateCompatibleConfig;
- (BOOL)needTem;
- (BOOL)needSystemUptime;
- (BOOL)needFreeDiskSpace;
- (id)subTypeSet;
- (id)subType;
- (id)description;
- (void).cxx_destruct;
@end
