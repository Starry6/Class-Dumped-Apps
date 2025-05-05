@interface MLEQPreset : NSObject
- (id)localizedName;
- (void).cxx_destruct;
- (id)name;
- (id)initWithBuiltInPresetType:;
- (int)builtInPresetType;
- (int)typeForAVController;
+ (id)eqPresetForName:;
+ (id)eqPresetForBuiltInPresetType:;
@end
