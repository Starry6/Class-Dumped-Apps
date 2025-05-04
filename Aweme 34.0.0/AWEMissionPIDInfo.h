@interface AWEMissionPIDInfo : MTLModel
@property (nonatomic) Q PIDType;
@property (nonatomic) NSString PID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)PIDType;
- (void)setPIDType:;
- (void)setPID:;
- (id)PID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
