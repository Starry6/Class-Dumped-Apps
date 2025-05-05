@interface TTAUpdateUserExtraProfileItem : TTADataRespModel
@property (nonatomic) NSNumber gender;
@property (nonatomic) NSString birthday;
@property (nonatomic) NSString industry;
@property (nonatomic) NSString area;
- (id)industry;
- (void)setIndustry:;
- (void)setBirthday:;
- (id)gender;
- (id)birthday;
- (void)setGender:;
- (void).cxx_destruct;
- (id)area;
- (void)setArea:;
@end
