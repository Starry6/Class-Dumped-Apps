@interface CSJSKANADImpressionObject : NSObject
@property (nonatomic) NSDate impressionDate;
@property (nonatomic) CSJSKANADImpressionModel skan_Impression_item;
- (id)impressionDate;
- (void)setImpressionDate:;
- (void)setSkan_Impression_item:;
- (id)skan_Impression_item;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
