@interface AWEProfileHeaderAgeAndLocationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (Class)sectionViewModelClass;
+ (BOOL)shouldShowIPLabelWithContext:;
+ (BOOL)shouldShowSchoolWithContext:;
+ (BOOL)shouldShowAgeWithContext:;
+ (BOOL)shouldShowGenderWithContext:;
+ (BOOL)shouldShowLocationWithContext:;
+ (BOOL)shouldShowChannelInfoWithContext:;
+ (id)locationStringWithContext:;
+ (Class)sectionControllerClass;
+ (BOOL)shouldShowSectionWithContext:;
@end
