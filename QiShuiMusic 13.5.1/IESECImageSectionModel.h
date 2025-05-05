@interface IESECImageSectionModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString type;
@property (nonatomic) NSNumber nums;
@property (nonatomic) NSNumber currentIndex;
@property (nonatomic) NSNumber minIndex;
- (id)nums;
- (void)setMinIndex:;
- (void)setNums:;
- (void)setCurrentIndex:;
- (void)setType:;
- (id)minIndex;
- (void)setTitle:;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (id)currentIndex;
@end
