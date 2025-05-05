@interface UIKBAutoFillTestTableViewDataSource : NSObject
@property (nonatomic) q numberOfSections;
- (id)init;
- (id)initWithCoder:;
- (long long)numberOfRowsInSection:;
- (void)encodeWithCoder:;
- (id)cellForRowAtIndexPath:;
- (void).cxx_destruct;
- (id)titleForHeaderInSection:;
- (long long)numberOfSections;
- (void)setNumberOfRows:forSection:;
- (void)setCellData:forRowAtIndexPath:;
- (void)setHeaderData:forSection:;
- (void)setFooterData:forSection:;
- (double)heightForRowAtIndexPath:;
- (id)titleForFooterInSection:;
- (double)heightForHeaderInSection:;
- (double)heightForFooterInSection:;
- (id)viewForHeaderInSection:;
- (id)viewForFooterInSection:;
@end
