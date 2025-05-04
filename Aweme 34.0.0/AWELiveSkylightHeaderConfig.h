@interface AWELiveSkylightHeaderConfig : NSObject
@property (nonatomic) double sectionCellWidth;
@property (nonatomic) NSString headerTitle;
@property (nonatomic) BOOL isNeedStick;
@property (nonatomic) double offsetForCenterX;
- (id)initWithCellwidth:headerTitle:isNeedStick:;
- (id)initWithCellwidth:offsetForCenterX:headerTitle:isNeedStick:;
- (double)sectionCellWidth;
- (void)setSectionCellWidth:;
- (double)offsetForCenterX;
- (BOOL)isNeedStick;
- (void)setIsNeedStick:;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
@end
