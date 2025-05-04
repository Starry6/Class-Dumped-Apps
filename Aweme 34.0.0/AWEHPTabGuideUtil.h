@interface AWEHPTabGuideUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)startPizzaVerifyWithComponentID:completion:;
+ (id)getHPTabGuideButtonInfoWithAwemeModel:tabID:;
+ (id)generateButtonComponentInfoWithButtonModel:;
+ (BOOL)isTabCurrentExit:;
+ (BOOL)isTabCanLanding:;
+ (id)generateLabelComponentInfoWithLabelModel:;
+ (id)getTabCurrentTitle:;
+ (id)filterHPTabGuideLabelModelListWithAwemeModel:;
+ (id)filterHPTabGuideButtonModelListWithAwemeModel:;
+ (id)findHPTabGuideLabelModelWithAwemeModel:tabID:;
+ (id)findHPTabGuideButtonModelWithAwemeModel:tabID:;
+ (id)getHPTabGuideLabelInfoWithAwemeModel:tabID:;
@end
