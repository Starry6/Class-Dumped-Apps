@interface AWESearchScanCameraPopEntranceConfigModel : MTLModel
@property (nonatomic) q version;
@property (nonatomic) q maxTimes;
@property (nonatomic) NSDictionary styles;
@property (nonatomic) AWESearchScanCameraPopEntranceStyleModel styleInfoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxTimes;
- (void)setMaxTimes:;
- (id)styleInfoModel;
- (void)setStyleInfoModel:;
- (void)updateStyleInfoModel:;
- (id)init;
- (id)styles;
- (void)setStyles:;
- (long long)version;
- (void)setVersion:;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
