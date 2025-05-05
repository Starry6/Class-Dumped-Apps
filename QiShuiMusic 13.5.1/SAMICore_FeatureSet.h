@interface SAMICore_FeatureSet : NSObject
@property (nonatomic) NSInteger numFeatureTypes;
@property (nonatomic) NSArray set;
- (int)numFeatureTypes;
- (void)setNumFeatureTypes:;
- (id)set;
- (void)setSet:;
@end
