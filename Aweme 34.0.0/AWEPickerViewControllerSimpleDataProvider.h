@interface AWEPickerViewControllerSimpleDataProvider : NSObject
@property (nonatomic) double componentWidth;
@property (nonatomic) double rowHeight;
@property (nonatomic) NSArray rowTexts;
@property (nonatomic) q defaultIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rowTexts;
- (long long)defaultIndexForComponent:;
- (void)setRowTexts:;
- (void).cxx_destruct;
- (void)setRowHeight:;
- (double)rowHeight;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (double)pickerView:rowHeightForComponent:;
- (id)pickerView:titleForRow:forComponent:;
- (double)pickerView:widthForComponent:;
- (long long)defaultIndex;
- (void)setDefaultIndex:;
- (double)componentWidth;
- (void)setComponentWidth:;
@end
