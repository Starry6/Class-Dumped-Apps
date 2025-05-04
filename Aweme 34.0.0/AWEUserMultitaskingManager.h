@interface AWEUserMultitaskingManager : NSObject
@property (nonatomic) AWEUserMultitaskingHintView multitaskingHintView;
@property (nonatomic) BOOL isMultitaskingHintViewShow;
- (void)handleMultitaskingWithBackAction:;
- (BOOL)shouldHandleMultitasking;
- (void)setIsMultitaskingHintViewShow:;
- (BOOL)shouldHandleMultitasking480;
- (BOOL)isMultitaskingHintViewShow;
- (id)multitaskingHintView;
- (void)setMultitaskingHintView:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
