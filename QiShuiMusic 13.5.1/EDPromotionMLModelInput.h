@interface EDPromotionMLModelInput : NSObject
@property (nonatomic) NSDictionary header_key_filtered;
@property (nonatomic) double to_count;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithHeader_key_filtered:to_count:;
- (id)header_key_filtered;
- (void)setHeader_key_filtered:;
- (double)to_count;
- (void)setTo_count:;
@end
