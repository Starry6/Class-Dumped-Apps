@interface AWEDitoMonitorImpl : NSObject
@property (nonatomic) BOOL isDoubeReport;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitorEvent:metric:category:extra:;
- (void)monitorTeaEvent:metric:category:extra:;
- (BOOL)isDoubeReport;
- (void)setIsDoubeReport:;
@end
