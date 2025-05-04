@interface AWEDetailMVMaterialSlotsModel : NSObject
@property (nonatomic) q duration;
@property (nonatomic) q minSlotsNumnber;
@property (nonatomic) NSArray cellModels;
- (void)setCellModels:;
- (id)cellModels;
- (long long)minSlotsNumnber;
- (id)fragmentDescription;
- (void)setMinSlotsNumnber:;
- (void)setDuration:;
- (id)description;
- (void).cxx_destruct;
- (long long)duration;
- (id)durationDescription;
+ (id)formatedDurationMS:;
@end
