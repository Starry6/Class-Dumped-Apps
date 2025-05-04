@interface AWEIMSkylightBusinessSnapshot : NSObject
@property (nonatomic) Q vmType;
@property (nonatomic) AWEIMSkylightBizInfoDataModel businessModel;
@property (nonatomic) NSString selfAvatarUrl;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL hasEverPressed;
- (void)setBusinessModel:;
- (id)businessModel;
- (unsigned long long)vmType;
- (void)setVmType:;
- (BOOL)hasEverPressed;
- (void)setHasEverPressed:;
- (id)selfAvatarUrl;
- (id)transformToViewModel;
- (void)setSelfAvatarUrl:;
- (id)initWithViewModel:;
- (void)setIdentifier:;
- (void)encodeWithCoder:;
- (id)identifier;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
@end
