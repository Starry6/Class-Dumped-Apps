@interface IESLivePickerMultiSelectorSource : IESLivePickerSource
@property (nonatomic) NSArray range;
@property (nonatomic) NSArray value;
- (id)stringValueForRow:forComponent:;
- (id)attributeStringValueForRow:forComponent:;
- (id)valuesRow;
- (void)setRange:;
- (long long)numberOfComponents;
- (id)range;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (long long)numberOfRowsInComponent:;
@end
