@interface AMSPaymentSheetRatingImage : NSObject
@property (nonatomic) NSString localAssetName;
@property (nonatomic) q ratingType;
@property (nonatomic) BOOL serverSupplied;
@property (nonatomic) BOOL tint;
@property (nonatomic) NSString URLString;
@property (nonatomic) NSString value;
- (id)URLString;
- (id)initWithDictionary:;
- (BOOL)tint;
- (void).cxx_destruct;
- (id)value;
- (id)initWithURLString:;
- (long long)ratingType;
- (BOOL)isServerSupplied;
- (id)localAssetName;
- (long long)_ratingTypeForType:;
@end
