@interface AWEUGHostInfoModel : MTLModel
@property (nonatomic) BOOL teenModeEnable;
@property (nonatomic) BOOL basicModeEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)teenModeEnable;
- (void)setTeenModeEnable:;
- (BOOL)basicModeEnable;
- (void)setBasicModeEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
