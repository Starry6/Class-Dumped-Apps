@interface MSVideoDerivativeSpecification : NSObject
@property (nonatomic) BOOL useCellular;
@property (nonatomic) BOOL powerRequired;
@property (nonatomic) double bitRate;
@property (nonatomic) NSString videoType;
@property (nonatomic) Q mediaAssetType;
- (BOOL)useCellular;
- (id)initWithDictionary:;
- (unsigned long long)mediaAssetType;
- (id)videoType;
- (double)bitRate;
- (BOOL)powerRequired;
+ (id)videoDerivativeSpecificationsWithDictionaryArray:;
@end
