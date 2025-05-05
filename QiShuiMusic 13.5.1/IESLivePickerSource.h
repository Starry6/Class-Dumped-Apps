@interface IESLivePickerSource : NSObject
@property (nonatomic) NSString mode;
@property (nonatomic) NSArray widthRatio;
- (id)stringValueForRow:forComponent:;
- (id)attributeStringValueForRow:forComponent:;
- (void)setWidthRatio:;
- (id)valueDate;
- (id)valuesRow;
- (id)widthRatio;
- (id)startDate;
- (long long)numberOfComponents;
- (id)endDate;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:;
- (long long)numberOfRowsInComponent:;
@end
