@interface AWESchoolInfoEditModel : NSObject
@property (nonatomic) NSString schoolName;
@property (nonatomic) NSString collegeName;
@property (nonatomic) NSString enrollYear;
@property (nonatomic) Q educationType;
@property (nonatomic) Q schoolVisibleType;
@property (nonatomic) NSString schoolVisible;
@property (nonatomic) BOOL hasChangedVisibleType;
- (void)configWithViewModel:;
- (void)setSchoolName:;
- (id)collegeName;
- (id)enrollYear;
- (id)schoolVisible;
- (unsigned long long)schoolVisibleType;
- (void)setSchoolVisibleType:;
- (void)setSchoolVisible:;
- (void)setCollegeName:;
- (void)setEnrollYear:;
- (unsigned long long)educationType;
- (void)setEducationType:;
- (BOOL)hasChangedVisibleType;
- (void)setHasChangedVisibleType:;
- (void).cxx_destruct;
- (id)schoolName;
@end
