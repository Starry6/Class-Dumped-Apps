@interface PLGreenController : NSObject
@property (nonatomic) NSDictionary currentGreenValues;
- (id)init;
- (void).cxx_destruct;
- (void)readValuesFromDisk;
- (BOOL)isGreenStateValid;
- (BOOL)greenValuesSimilarToGreenValues:;
- (id)currentGreenValues;
@end
