@interface BDTrackerModuleInfo : NSObject
@property (nonatomic) NSString moduleID;
@property (nonatomic) NSString moduleName;
@property (nonatomic) NSString moduleType;
- (void)setModuleName:;
- (id)init;
- (id)moduleName;
- (void).cxx_destruct;
- (id)moduleType;
- (void)setModuleType:;
- (id)moduleID;
- (void)setModuleID:;
@end
