@interface AWECollegeInfoDataController : NSObject
@property (nonatomic) BOOL isRequestOnAir;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)fetchCollegeListWithSchoolName:completion:;
@end
