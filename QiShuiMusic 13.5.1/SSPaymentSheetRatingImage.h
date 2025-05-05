@interface SSPaymentSheetRatingImage : NSObject
@property (nonatomic) q ratingType;
@property (nonatomic) BOOL tint;
@property (nonatomic) NSString urlString;
@property (nonatomic) NSString value;
- (id)urlString;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)initWithDictionary:;
- (BOOL)tint;
- (void).cxx_destruct;
- (id)value;
- (id)copyWithZone:;
- (id)initWithURLString:;
- (long long)ratingType;
- (BOOL)isServerSupplied;
- (id)localAssetName;
- (long long)_ratingTypeForType:;
@end
