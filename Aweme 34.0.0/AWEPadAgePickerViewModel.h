@interface AWEPadAgePickerViewModel : NSObject
@property (nonatomic) NSDate selectedDate;
@property (nonatomic) NSNumber selectedGender;
@property (nonatomic) NSNumber selectedAge;
@property (nonatomic) NSDate currentDate;
- (id)selectedGender;
- (void)setSelectedGender:;
- (void)updateChildInfoWithBirthday:gender:Completion:;
- (id)selectedAge;
- (void)setSelectedAge:;
- (id)currentDate;
- (void)setCurrentDate:;
- (void).cxx_destruct;
- (id)selectedDate;
- (void)setSelectedDate:;
@end
